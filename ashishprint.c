#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <linux/cred.h>
#include <linux/sched.h>

SYSCALL_DEFINE0(ashishprocess)
{
    printk("Parent Process ID : %d \n", current->parent->pid);
    printk("Current Process ID : %d \n", current->pid);

    return 0;
}