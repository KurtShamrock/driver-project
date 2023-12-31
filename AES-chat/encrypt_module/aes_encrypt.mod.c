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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x92997ed8, "_printk" },
	{ 0xe9b8ca6a, "crypto_alloc_base" },
	{ 0x1ed434ea, "crypto_cipher_setkey" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x30e967fb, "__class_create" },
	{ 0xe775b64e, "device_create" },
	{ 0x4ca346e5, "kmalloc_caches" },
	{ 0xeaa1fdc0, "kmalloc_trace" },
	{ 0x4d90f204, "cdev_alloc" },
	{ 0x746ff68, "cdev_init" },
	{ 0x527f0f93, "cdev_add" },
	{ 0xda7220e7, "crypto_destroy_tfm" },
	{ 0x56a5fda2, "cdev_del" },
	{ 0x37a0cba, "kfree" },
	{ 0x48618e0, "device_destroy" },
	{ 0xdd1b3227, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe08300aa, "crypto_cipher_encrypt_one" },
	{ 0xcd4e120a, "crypto_cipher_decrypt_one" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa916b694, "strnlen" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb83992f2, "module_layout" },
};

MODULE_INFO(depends, "");

