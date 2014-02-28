#include <types.h>
#include <lib.h>
#include <thread.h>
#include <synch.h>
#include <test.h>

static void thread_function(void *ptr, unsigned long value){
	(void)value;
 	 kprintf("Thread go");
 	 char* cp = ptr;
	*cp +'0';
	kprintf(cp);    
}

int mythreadtest(int nargs, char **args){
	kprintf("Running my thread test");
	   (void)nargs; //Avoid unused parameter warning
  	 //args[0] is name of calling program
  	 int n = (*args[1])-'0';
<<<<<<< HEAD
 	
 	 for (int i = 0; i < n; ++i){
=======
  	 for (int i = 0; i < n; ++i){
>>>>>>> a7836a0773c376c41a4d996bc0a7f01f7a8215ce
 	     thread_fork("thread test thread", NULL, thread_function, &i, 1);

 }
return 0;
}
