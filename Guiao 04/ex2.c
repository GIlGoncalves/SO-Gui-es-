#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>


int main(int argc, char *argv[]){
   int fd = open("/etc/passwd",O_RDONLY);
char c;
    if(fd==-1) { 
               perror ("/etc/passwd") ; 
                _exit(1);
             }
  
      dup2(fd,0);
      close(fd);
   
fd=open("saida.txt", O_CREAT|O_WRONLY|O_TRUNC, 0666);
       dup2(fd,1);
       close(fd);

int fp2=open("erros.txt",O_CREAT|O_WRONLY|O_TRUNC,0666);
     dup2(fp2,2);
     close(fp2);
   if(fork()==0) {
      while(read(0,&c,1)==1) {
           write(1,&c,1);
           write(2,&c,1);

   
}

    puts("ola");
    
  }



return 0; 
}



