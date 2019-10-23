#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/sched.h>
#include<linux/init_task.h>

static int print_pid(void)
{
    struct task_struct *task, *p;
    struct list_head *pos;
    int count = 0;
    printk("Hello World enter begin:\n");
    task = &init_task;
    list_for_each(pos, &task -> tasks)
    {
        p = list_entry(pos, struct task_struct, tasks);
        count++;
        printk("%d --> %s\n", p -> pid, p -> comm);
    }
    printk("The number of process is: %d\n", count);
    return 0;
}

static int __init print_pid_init(void)
{
    print_pid();
    return 0;
}

static void __exit print_pid_exit(void)
{
    printk("Goodbye to pid\n");
}

module_init(print_pid_init);
module_exit(print_pid_exit);
MODULE_LICENSE("GPL");