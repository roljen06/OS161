#include <types.h>
#include <lib.h>
#include <test.h>
#include <thread.h>
#include <current.h>


static
void thread_function(void *ptr, unsigned long value){
	char* name = ptr;
	kprintf(name);
	kprint(curthread->t_name);
}

int mytest(int nargs, char **args){
	kprintf("Jennifer's test works!");
	for (int i = 0; i < nargs; i++){
		kprintf(args[i]);
		kprintf("\n");
	}
	thread_fork("test thread", NULL, thread_function, "test thread", nargs)
	return 0;
}
