
#include <types.h>
#include <copyinout.h>
#include <syscall.h>
#include <lib.h>

void sys__exit(int code){
  thread_exit();
}
