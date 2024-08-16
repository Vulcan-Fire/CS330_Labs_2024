#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/syscall.h>

int main(void){
	char *str="Hello World\n";
	unsigned int size=13;
	unsigned int fd=1;
	unsigned int syscall_number=1;

	asm volatile(	"mov %0, %%rax;"
			"mov %1, %%rdi;"
			"mov %2, %%rsi;"
			"mov %3, %%rdx;"
			"mov %%rax, %0;"
		       			
			"syscall;"
			:
			: "m"(syscall_number), "m"(fd), "m"(str), "m"(size)
			: "rax", "rdi", "rsi", "rdx"			
		    );
	
	return 0;

}
