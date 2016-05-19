#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

pid_t filho;
int values [argc];
int i;
int crianca[argc];

for (i=1;i<argc;i++) {
       filho=fork();
           
              if(filho==0) {
                        
                    execvp(argv[i],&argv[i]);
                    perror("Não funciona");  
                    _exit(1);
                   }

   else {crianca[i-1]=filho; }



}

for (i=0;i<argc;i++) {
      
       waitpid(crianca[i],&values[i],0); 

        }


return 0;
}


