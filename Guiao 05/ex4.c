#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){
int pd[2];
pipe(pd);

  if(fork()==0) {
  close(pd[1]);
  dup2(pd[0],0);
  close(pd[0]);
   execlp("wc","wc","-l",NULL);
   perror("wc");
   return 1;

} 
 close(pd[0]);
 dup2(pd[1],1);
 close(pd[1]);
  execlp("ls","ls","/etc",NULL);
 perror("ls");
return 1;

}


