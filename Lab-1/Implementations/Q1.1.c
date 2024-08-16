#include <stdio.h>
#include <unistd.h>

int main(void){

        syscall(1,1,"Hello World!",12); // 1 for stdout, 1 for write, string, stringlen 

    return 0;
}
