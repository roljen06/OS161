#include <sys/types.h>
#include <unistd.h>
#include <err.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <simple_syscalls.c>

void
main(int argc, char *argv[])
{
	helloworld();
	printint(42);
	printstring("\nHere is a sample string!", 26);
	// putchar('Z');
	char z = 'Z';
	printstring("\nWriting Z using write:  ", 26);
	write(1, &z, 1);

	printstring("\nWriting Z using putchar:  ", 28);
	putchar('Z');
}

