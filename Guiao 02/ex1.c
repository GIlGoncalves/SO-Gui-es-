#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>


int main() {

printf("meu pide %d, pid do pai,%d\n",getpid(),getppid());


return 0;



}

