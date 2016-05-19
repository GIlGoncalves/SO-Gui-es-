#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main() {
pid_t pid;
int i=0;
int status[10];

for(i=0;i<MAX;i++) {

 pid=fork();

    if(pid==0) {
             printf("Pid do pai %d , meu pid %d\n",getppid(),getpid());
                    
    }      
    else {
            waitpid(pid,&status[i],0);
            _exit(0);

            }               
}
return 0;
}
