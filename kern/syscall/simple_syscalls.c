#include <types.h>
#include <copyinout.h>
#include <syscall.h>
#include <lib.h>

int sys_helloworld(void)
{
  kprintf("Hello WORLD!\n")


void sys__exit(int code){
  thread_exit();
}

int sys_printint(int val) {
	kprintf("%d\n", val);
	return 0;
}

int sys_printstring(char * str, int len) {
	kprintf(str);
	return 0;
}

int sys_write(int fd, const void* buf, size_t nbytes) {
	char kbuf[KBUF_MAX];
	if (nbytes >= KBUF_MAX) return EFAULT;
	copyin(buf, kbuf, nbytes);
	kbuf[nbytes+1] = 0;
	kprintf(kbuf);
	return 0;
}
