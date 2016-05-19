#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>


int main (int argc, char* argv[]) {

pid_t filho;

    
    filho=fork();
        
     if(filho==0) {

                    execvp(argv[1],&argv[1]);
                    perror("Ardeu");
                    _exit(1);     

          }
      else { wait(NULL);} 
    



return 0;
}

