#
# Licence: GPL
# Created: 2012-04-02 11:52:35+02:00
# Main authors:
#     - Jérôme Pouiller <jezz@sysmic.org>
#

obj-m := mod0_min.o

KDIR ?= /lib/modules/$(shell uname -r)/build

default: modules
install: modules_install

modules modules_install help clean:
	$(MAKE) -C $(KDIR) M=$(shell pwd) $@

