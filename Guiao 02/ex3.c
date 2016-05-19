#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>


int main () {

pid_t pidFilho;
int i=0;
int estado;

for(i=0;i<10;i++) {


pidFilho=fork();


   if(pidFilho<0) {

   return -1;
   }
  
  else {


    if(pidFilho==0) {
  
     printf("pid do filho: %d , pid do pai %d\t",getpid(), getppid());           
     
     exit(i+1);

}
   
   else {

       
if (wait(&estado) >= 0)
{
    if (WIFEXITED(estado))
    {
        /* Child process exited normally, through `return` or `exit` */
        printf("Pid do pai %d ,pid do filho %d, Child process exited with %d status\n",getpid(),pidFilho, WEXITSTATUS(estado));
    }
}
}
}
}

return 0;
}
