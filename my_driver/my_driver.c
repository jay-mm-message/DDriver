#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int my_number = 0;
module_param(my_number, int, S_IRUSR);

static int __init my_driver_init(void) {
    printk(KERN_INFO "Module loaded! my_number = %d\n", my_number);
    printk(KERN_INFO "Hello, Embedded Driver!\n");
    return 0;
}

static void __exit my_driver_exit(void) {
    printk(KERN_INFO "Goodbye, Embedded Driver!\n");
}

module_init(my_driver_init);
module_exit(my_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple example of passing parameters to a kernel module.");
