#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

static int __init lkp_init(void)
{
    printk("Hello World! from the kernel space...");
    return 0;
}

static void __exit lkp_exit(void)
{
    printk("Goodbye World! leaving the kernel space...");
}

module_init(lkp_init);
module_exit(lkp_exit);

MODULE_LICENSE("GPL");