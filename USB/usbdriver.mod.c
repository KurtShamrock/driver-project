#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92997ed8, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb732d645, "usb_register_driver" },
	{ 0xb350312a, "usb_deregister_dev" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5de268d2, "usb_submit_urb" },
	{ 0x82b20a52, "input_event" },
	{ 0x339be36f, "_dev_err" },
	{ 0x1f3306e, "usb_kill_urb" },
	{ 0x91690dbe, "usb_deregister" },
	{ 0x4ca346e5, "kmalloc_caches" },
	{ 0xeaa1fdc0, "kmalloc_trace" },
	{ 0x6765dded, "input_allocate_device" },
	{ 0x16f86dcf, "usb_alloc_coherent" },
	{ 0xafa1f43b, "usb_alloc_urb" },
	{ 0x754d539c, "strlen" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xa916b694, "strnlen" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x330f0544, "input_register_device" },
	{ 0xb1ab2c5c, "usb_free_urb" },
	{ 0xed830d9b, "__register_chrdev" },
	{ 0xb8cd532e, "usb_free_coherent" },
	{ 0x3f67e165, "input_free_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xb83992f2, "module_layout" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v1A81p101Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p1665d*dc*dsc*dp*ic08isc06ip50in*");

MODULE_INFO(srcversion, "D8E09D7555140B477BAFE16");
