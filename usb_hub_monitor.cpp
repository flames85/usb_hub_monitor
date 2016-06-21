#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/un.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <linux/types.h>
#include <linux/netlink.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;

#define UEVENT_BUFFER_SIZE      2048
#define DEV_HUB_PREFIX_SIZE		1024
#define	DEV_HUB_PREFIX_CONF	    "usb_hub_prefix.conf"

string 	*g_strHubPrefix = NULL;
FILE 	*g_fp = NULL;

extern "C" 
{
        int init_hotplug_sock(void)
        {

                struct sockaddr_nl snl;
                const int buffersize = 16 * 1024 * 1024;
                int retval;

                memset(&snl, 0x00, sizeof(struct sockaddr_nl));
                snl.nl_family = AF_NETLINK;
                snl.nl_pid = getpid();
                snl.nl_groups = 1;

                int hotplug_sock = socket(PF_NETLINK, SOCK_DGRAM, NETLINK_KOBJECT_UEVENT);
                if (hotplug_sock == -1) 
                {
                        printf("error getting socket: %s", strerror(errno));
                        return -1;
                }

                /* set receive buffersize */

                setsockopt(hotplug_sock, SOL_SOCKET, SO_RCVBUFFORCE, &buffersize, sizeof(buffersize));
                retval = bind(hotplug_sock, (struct sockaddr *) &snl, sizeof(struct sockaddr_nl));
                if (retval < 0) {
                        printf("bind failed: %s", strerror(errno));
                        close(hotplug_sock);
                        hotplug_sock = -1;
                        return -1;
                }

                return hotplug_sock;

        }
}

bool parse(const string &strBuf, string &dev, string &usbSeq)
{
        size_t nPos = strBuf.find(*g_strHubPrefix);
        if(nPos == string::npos)
        {
                return false;	
        }

        size_t nStart = nPos + g_strHubPrefix->size();

        nPos = strBuf.find("/", nStart);

        if(nPos == string::npos)
        {
                return false;
        }

        size_t nLen = nPos - nStart;

        usbSeq = strBuf.substr(nStart, nLen);

        nPos = strBuf.find_last_of("/");
        if(nPos == string::npos)
        {
                return false;
        }

        dev = strBuf.substr(nPos+1);

        return true;
}

void initMode(const string &strBuf)
{
        if(NULL == g_strHubPrefix)
        {
                g_strHubPrefix = new string(strBuf);
        }
        for(size_t index = 0; index < g_strHubPrefix->size() && index < strBuf.size(); index ++)
        {
                if(g_strHubPrefix->at(index) != strBuf.at(index))
                {
                        *g_strHubPrefix = g_strHubPrefix->substr(0, index);
                        break;
                }
        }
        printf("init dev hub prefix is[%s] so far\n", g_strHubPrefix->c_str());
        if( (g_fp = fopen(DEV_HUB_PREFIX_CONF, "wb") ) == NULL )
        {
                printf("open conf[%s] fail. 可能权限不足!\n", DEV_HUB_PREFIX_CONF);
                return;
        }
        fwrite(g_strHubPrefix->c_str(), sizeof(char), g_strHubPrefix->size(), g_fp);
        fclose(g_fp);
}

int main(int argc, char* argv[])
{
        bool init_mode = false;
        if(argc > 1)
        {
                printf("# init mode\n");
				printf("请将USB存储设备插拔同一个Hub的不同USB口, 然后退出.\nPS: 不得插拔不同的Hub, 如果你这样做了, 请退出后再试. 总之init模式下, 保证只有需要检测的Hub发生变化.\n\n");
                init_mode = true;
        }
        else
        {
                printf("# test mode\n");

                if( (g_fp = fopen(DEV_HUB_PREFIX_CONF, "rb") ) == NULL )
                {
                        printf("open conf[%s] fail, please run init mode first!\n", DEV_HUB_PREFIX_CONF);
						printf("usage.\n\tusb_hub_monitor init\n\n");
                        return -1;
                }

                char cHubPrefix[DEV_HUB_PREFIX_SIZE] = {0};
                memset(cHubPrefix, 0x0, sizeof(cHubPrefix));
                if(fread(cHubPrefix, sizeof(char), DEV_HUB_PREFIX_SIZE, g_fp) <=0 )
                {
                        printf("read conf[%s] fail, please run init mode first!\n", DEV_HUB_PREFIX_CONF);
                        return -2;
                }
                printf("get dev hub prefix[%s]\n", cHubPrefix);

                g_strHubPrefix = new string(cHubPrefix);
        }

        // 读取消息数组
        char buf[UEVENT_BUFFER_SIZE * 2] = {0};
        // 串口socket
        int hotplug_sock = init_hotplug_sock();
        while(1)
        {
                // 清空
                memset(buf, 0x0, sizeof(buf));
                // 阻塞读取
                recv(hotplug_sock, &buf, sizeof(buf), 0);  
                string strBuf = buf;
                string dev;
                string usbSeq;

                // 解析出开头是add, remove, 末尾有block开头的
                if(0 == strBuf.find("add@") && strBuf.find("block/") != std::string::npos)
                {
                        strBuf = strBuf.substr(4);
                        if(init_mode)
                        {
                                initMode(strBuf);
                        }
                        else
                        {
                                printf("add ");
                                if(parse(strBuf, dev, usbSeq))
                                {
                                        printf("event: usb[%s] dev-name[%s]\n", usbSeq.c_str(), dev.c_str());
                                }
                                else
                                {
                                        printf("event: parse error[%s]\n", strBuf.c_str());
                                }
                        }
                }
                else if(0 == strBuf.find("remove@") && strBuf.find("block/") != std::string::npos)
                {
                        strBuf = strBuf.substr(7);
                        if(init_mode)
                        {
                                initMode(strBuf);
                        }
                        else
                        {
                                printf("remove ");
                                if(parse(strBuf, dev, usbSeq))
                                {
                                        printf("event: usb[%s] dev-name[%s]\n", usbSeq.c_str(), dev.c_str());
                                }
                                else
                                {
                                        printf("event: parse error[%s]\n", strBuf.c_str());
                                }
                        }
                }
        }
        return 0;
}
