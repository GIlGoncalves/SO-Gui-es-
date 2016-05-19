#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>




int main () {
pid_t pid,filho;
int status;
pid=fork();


        if(pid==0) {
           /*filho*/
      
         printf("filho :pid = %d, ppid=%d\n",getpid(),getppid());
  return 0;

}
  else {

    //pai
   printf("pai: pid= %d , ppid=%d , filho =%d\n",getpid(),getppid() ,pid);
  filho=wait (&status);
printf("pai: morreu filho = %d\n", filho );

if(WIFEXITED(status)) {

   printf("pai : filho terminho = %d\n" , WEXITSTATUS(status));


}

 else {

          


}

}
puts("espetaculo");



return 0;








}
