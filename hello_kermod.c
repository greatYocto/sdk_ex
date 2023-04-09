#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("woonrae");
MODULE_DESCRIPTION("Hello kernel module");

static int __init hello_kermod_init(void)
{
  printk(KERN_INFO "Hello kernel module!\n");
  return 0;
}

static void __exit hello_kermod_cleanup(void)
{
  printk(KERN_INFO "Cleaning up kernel module.\n");
}

module_init(hello_kermod_init);
module_exit(hello_kermod_cleanup);
