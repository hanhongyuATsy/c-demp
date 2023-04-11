#!/bin/bash

../../sdk/arm/toolchain/compile_app -j12 -s ./ -a all
ssh-keygen -f "/home/hhy/.ssh/known_hosts" -R "10.1.0.79"

while getopts "p:l:d:u:h:a:" OPT; do
    case $OPT in
    p)
	echo "test~~~~~~~~~~~~~ $2"
	scp release/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement root@10.1.0.79:/containers/Container08/work/common/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement
        ;;


    l)
	echo "test~~~~~~~~~~~~~ $2"
	scp release/opt/ServiceDispatchingManagementDemo/bin/ServiceDispatchingManagementDemo root@10.1.0.79:/containers/Container02/work/common/opt/ServiceDispatchingManagementDemo/bin/ServiceDispatchingManagementDemo
        ;;
    d)
	echo "test~~~~~~~~~~~~~ $2"
	scp release/opt/ServiceDispatchingManagementDemo/bin/root@10.1.0.79:/containers/Container08/work/common/opt/ServiceDispatchingManagementDemo/bin/ServiceDispatchingManagementDemo
        ;;

    u)
	echo "test~~~~~~~~~~~~~ $2"
	scp release/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement root@10.1.0.79:/containers/Container08/work/common/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement
        ;;

    a)
	echo "test~~~~~~~~~~~~~ $2"
	scp code/ExtensionLib/output/lib/s32g/libsdm_wrapper.* root@10.1.0.79:/containers/Container02/rootfs/usr/lib/
	echo "test~~~~~~~~~~~~~AsfServiceDispatchingManagement : p; ServiceDispatchingManagementDemo :s  "
        ;;
    h)
	echo "test~~~~~~~~~~~~~AsfServiceDispatchingManagement : p; ServiceDispatchingManagementDemo :s  "
        ;;
    esac

done


