#
# Makefile for the linux kernel.
#

KBUILD_CPPFLAGS += -Iarch/l4/kernel/arch-arm/plat-omap/include
KBUILD_CPPFLAGS += -DCONFIG_ARCH_OMAP
KBUILD_CPPFLAGS	+= -DCONFIG_ARCH_OMAP3
KBUILD_CPPFLAGS	+= -DCONFIG_ARCH_OMAP2PLUS
KBUILD_CPPFLAGS	+= -DCONFIG_SOC_OMAP3430
KBUILD_CPPFLAGS	+= -DCONFIG_ARCH_OMAP_OTG
KBUILD_CPPFLAGS	+= -DCONFIG_I2C_OMAP
KBUILD_CPPFLAGS	+= -DCONFIG_USB_MUSB_OMAP2PLUS
KBUILD_CPPFLAGS	+= -DCONFIG_USB_MUSB_HDRC
KBUILD_CPPFLAGS	+= -DCONFIG_USB_MUSB_SOC

# Common support
obj-y  := clock.o dma.o omap_device.o i2c.o

#obj-$(CONFIG_OMAP_PM_NOOP) += omap-pm-noop.o
obj-y += omap-pm-noop.o

