#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa7672d5a, "module_layout" },
	{ 0x8f2874c8, "cdev_alloc" },
	{ 0xf922bcdc, "module_refcount" },
	{ 0xba13492, "cdev_del" },
	{ 0x2e9014ad, "per_cpu__current_task" },
	{ 0x20623cac, "kmalloc_caches" },
	{ 0x74450b25, "cdev_init" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xb72397d5, "printk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xed24100d, "cdev_add" },
	{ 0x6eb25b1e, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "441D9DCA3212B9935686FA6");
