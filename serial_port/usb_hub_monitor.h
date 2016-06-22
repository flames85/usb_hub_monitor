#ifndef _USB_HUB_MONITOR_H
#define _USB_HUB_MONITOR_H


#include <string>
#include <map>
#include "stty.h"

using namespace std;

enum CHANGE_TYPE
{
    TYPE_ADD = 0,
    TYPE_REMOVE = 1
};

struct UsbHubTunnelInfo
{
    int speed;
    int databits;
    int parity;
    int stopbits;
    string devName;
    TTY_INFO *ptty;
    UsbHubTunnelInfo()
    {
        speed = 9600;
        parity = 8;
        stopbits = 'N';
        stopbits = 1;
        devName.clear();
        ptty = NULL;
    }
};

class UsbHubMonitor
{
public:

    UsbHubMonitor();
    virtual ~UsbHubMonitor();

    int go();

    int sendUsbHubTunnel(int nSeq, char *pbuf, int size, int speed, int databits, int parity, int stopbits);
    int sendUsbHubTunnel(int nSeq, char *pbuf, int size);

    int recvUsbHubTunnel(int nSeq, char *pbuf, int size, int speed, int databits, int parity, int stopbits);
    int recvUsbHubTunnel(int nSeq, char *pbuf, int size);

    void work(const string &strBuf, CHANGE_TYPE type);

private:

    void addUsbHubTunnel(int nSeq, UsbHubTunnelInfo *tunnelInfo);
    bool removeUsbHubTunnel(int nSeq);

    static void * threadProc(void* self);
    int str2int( const string &str, int nScale = 10);


private:
    pthread_mutex_t                m_mutex;
    map<int, UsbHubTunnelInfo*>    m_usbSeqMap;
    string 	                      *m_strHubPrefix;
    pthread_t                      m_id;
};




#endif // _USB_HUB_MONITOR_H