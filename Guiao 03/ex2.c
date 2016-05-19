#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>

int main () {
pid_t filho;

filho=fork();

if(filho==0) {
               
             execlp("ls","ls","-l",NULL);
                     perror("Não funcionou");
                   _exit(1);
 
       }
else { wait (NULL);  }

  return 0;
}



