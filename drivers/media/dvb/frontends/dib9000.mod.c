#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xdb2ab789, "module_layout" },
	{ 0xdcc1ee11, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x1050508b, "dev_set_drvdata" },
	{ 0x21994215, "i2c_transfer" },
	{ 0x55837517, "mutex_unlock" },
	{ 0x8fd48e89, "i2c_add_adapter" },
	{ 0xa828f639, "dvb_frontend_detach" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xa22ee5e6, "mutex_lock_interruptible" },
	{ 0x3bf89010, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x328a05f1, "strncpy" },
	{ 0xafecfdf6, "dibx000_exit_i2c_master" },
	{ 0xe3bdd4a9, "dibx000_reset_i2c_master" },
	{ 0x700afd01, "i2c_del_adapter" },
	{ 0xa79472b4, "dibx000_get_i2c_adapter" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f2ec48e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe5ae8707, "intlog10" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x51997a7e, "dibx000_init_i2c_master" },
	{ 0xa0413525, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,dibx000_common";

