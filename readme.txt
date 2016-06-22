

1. 结果
////////////////////////////////////////////////////////////////////////

# test mode
get dev hub prefix[/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.]
add event: usb[2] dev-name[sdd]
add event: usb[2] dev-name[sdd1]



2. 相同的设备路径头部
////////////////////////////////////////////////////////////////////////


/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.


3. netlink socket
////////////////////////////////////////////////////////////////////////

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2
SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/scsi_host/host23

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/scsi_disk/23:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/scsi_device/23:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/scsi_generic/sg2

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/bsg/23:0:0:0

SnoTest---------------add@/devices/virtual/bdi/8:32

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/block/sdc

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/block/sdc/sdc4

SnoTest---------------add@/module/nls_iso8859_1

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/bsg/23:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/scsi_generic/sg2

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/scsi_device/23:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/scsi_disk/23:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/block/sdc/sdc4

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0/block/sdc

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0/23:0:0:0

SnoTest---------------remove@/devices/virtual/bdi/8:32

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/target23:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23/scsi_host/host23

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0/host23

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3/4-1.5.3:1.0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.3

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/scsi_host/host24

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/scsi_disk/24:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/scsi_device/24:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/scsi_generic/sg2

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/bsg/24:0:0:0

SnoTest---------------add@/devices/virtual/bdi/8:32

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/block/sdc

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/block/sdc/sdc4

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/bsg/24:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/scsi_generic/sg2

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/scsi_device/24:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/scsi_disk/24:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/block/sdc/sdc4

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0/block/sdc

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0/24:0:0:0

SnoTest---------------remove@/devices/virtual/bdi/8:32

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/target24:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24/scsi_host/host24

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0/host24

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4/4-1.5.4:1.0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.4

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/scsi_host/host25

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/scsi_disk/25:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/scsi_device/25:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/scsi_generic/sg2

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/bsg/25:0:0:0

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------add@/devices/virtual/bdi/8:32

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/block/sdc

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/block/sdc/sdc4

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/bsg/25:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/scsi_generic/sg2

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/scsi_device/25:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/scsi_disk/25:0:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/block/sdc/sdc4

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0/block/sdc

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0/25:0:0:0

SnoTest---------------remove@/devices/virtual/bdi/8:32

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/target25:0:0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25/scsi_host/host25

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0/host25

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1/4-1.5.1:1.0

SnoTest---------------remove@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.1

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/scsi_host/host26

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0/26:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0/26:0:0:0/scsi_disk/26:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0/26:0:0:0/scsi_device/26:0:0:0

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0/26:0:0:0/scsi_generic/sg2

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0/26:0:0:0/bsg/26:0:0:0

SnoTest---------------add@/devices/virtual/bdi/8:32

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0/26:0:0:0/block/sdc

SnoTest---------------add@/devices/pci0000:00/0000:00:1d.0/usb4/4-1/4-1.5/4-1.5.2/4-1.5.2:1.0/host26/target26:0:0/26:0:0:0/block/sdc/sdc4

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2

SnoTest---------------change@/devices/virtual/thermal/thermal_zone2
SnoTest---------------change@/devices/virtual/thermal/thermal_zone2