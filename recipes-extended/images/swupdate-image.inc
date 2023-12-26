
USE_DEVFS = "1"

# This variable is triggered to check if sysvinit must be overwritten by a single rcS
export SYSVINIT = "no"

IMAGE_INSTALL = "base-files \
		base-passwd \
		busybox \
		mtd-utils \
		mtd-utils-ubifs \
		libconfig \
		swupdate \
		swupdate-www \
		${@bb.utils.contains('SWUPDATE_INIT', 'tiny', 'virtual/initscripts-swupdate', 'initscripts systemd', d)} \
		util-linux-sfdisk \
		mmc-utils \
		e2fsprogs-resize2fs \
		 "

IMAGE_FSTYPES = "ext4.gz.u-boot ext4 cpio.gz.u-boot"

inherit image

IMAGE_LINGUAS = " "
