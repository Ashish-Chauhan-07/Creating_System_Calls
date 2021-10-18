#include <linux/syscalls.h>
#include <linux/kernel.h>

SYSCALL_DEFINE1(ashishprint, char *, message)
{
  char buf[256];
  long copied = strncpy_from_user(buf, message, sizeof(buf));

  if (copied < 0 || copied == sizeof(buf))
    return -EFAULT;

  printk(KERN_INFO "Message -  \"%s\"\n", buf);

  return 0;
}