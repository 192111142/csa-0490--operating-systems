#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    fork();
    fork();
    fork();
    printf("this process is created by fork() system call");
    return 0;
}


