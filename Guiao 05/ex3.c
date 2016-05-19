#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main(){
int pd[2];
int n;
char buffer[1024];

	   if(pipe(pd)==-1) {perror("pipe"); return 1;}

pid_t pid;
pid=fork();

if(pid==0) {
      close(pd[1]); /* como o filho nao vai precisar de escrever podemos fechar essa opcao */
             dup2(pd[0],0);
             close(pd[0]);
             execlp("wc","wc",NULL);           
                     perror("execpl");
        	     return 1;
}
else {
      		if(pid==-1) {perror("fork"); return 1;}

      else {
              close(pd[0]); /*como o pai nao vai ler podemos fechar esta opcao   */
            while((n=read(0,buffer,sizeof(buffer)))>0){
            write(pd[1],buffer,n);
        }
                close(pd[1]);

}        
}
return 0;
}
