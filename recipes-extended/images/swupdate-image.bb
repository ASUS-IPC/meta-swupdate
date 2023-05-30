SUMMARY = "Root filesystem for swupdate as rescue system"
DESCRIPTION = "Root FS to start swupdate in rescue mode	\
		"
LICENSE = "MIT"

require swupdate-image.inc

IMAGE_ROOTFS_SIZE = "8192"




PACKAGE_EXCLUDE += " jailhouse kernel-module-jailhouse libncursesw5 libpanelw5 libpython3 libreadline8 python3*  perl* apt dpkg "
