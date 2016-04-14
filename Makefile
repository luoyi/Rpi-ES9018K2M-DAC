KERNEL_SRC = /lib/modules/$(shell uname -r)/source
BUILD_DIR := $(shell pwd)
DTC_DIR = /lib/modules/$(shell uname -r)/build/scripts/dtc/
VERBOSE = 0

OBJS    = rpi-es9018k2m-dac.o  es9018k2m.o

obj-m := $(OBJS)

all:
	make -C $(KERNEL_SRC) SUBDIRS=$(BUILD_DIR) KBUILD_VERBOSE=$(VERBOSE) modules

clean:
	make -C $(KERNEL_SRC) SUBDIRS=$(BUILD_DIR) clean
	rm -f sabreberry32-overlay.dtb

dtbs:
	$(DTC_DIR)/dtc -@ -I dts -O dtb -o sabreberry32-overlay.dtb sabreberry32-overlay.dts

modules_install:
	cp sabre9018q2c.ko     /lib/modules/$(shell uname -r)/kernel/sound/soc/codecs/
	cp sabreberry32.ko     /lib/modules/$(shell uname -r)/kernel/sound/soc/bcm/
	depmod -a

modules_remove:
	rm /lib/modules/$(shell uname -r)/kernel/sound/soc/codecs/sabre9018q2c.ko
	rm /lib/modules/$(shell uname -r)/kernel/sound/soc/bcm/sabreberry32.ko
	depmod -a

install:
	modprobe sabre9018q2c
	modprobe sabreberry32

remove:
	modprobe -r sabreberry32
	modprobe -r sabre9018q2c

install_dtb:
	cp sabreberry32-overlay.dtb /boot/overlays/

remove_dtb:
	rm /boot/overlays/sabreberry32-overlay.dtb
