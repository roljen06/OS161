#include <types.h>
#include <kern/errno.h>
#include <kern/syscall.h>
#include <lib.h>
#include <mips/trapframe.h>
#include <thread.h>
#include <current.h>
#include <syscall.h>

#define KBUF_MAX 256


int sys_helloworld(void){
  kprintf("Hello WORLD!\n");
	return 0;
}

/* void sys__exit(int code){
	thread_exit();
	return 0;
}
*/

int sys_printint(int i) {
	kprintf("%d\n", i);
	
}

int sys_printstring(char* s, size_t len)
{
	char s_safe[len];
	size_t string_length;
	copyinstr((const_userptr_t) s, s_safe, len, &string_length);
	kprintf(s_safe);
	return string_length;
}

//int sys_write(int fd, const void* buf, size_t nbytes) {
//	char kbuf[KBUF_MAX];
//	(nbytes >= KBUF_MAX) return EFAULT;
//	copyin(buf, kbuf, nbytes);
//	kbuf[nbytes+1] = 0;
//	kprintf(kbuf);
//	return 0;
//}
