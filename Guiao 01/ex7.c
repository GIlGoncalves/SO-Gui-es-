#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct buffer {

ssize_t nrLido;
char *ler;

}*Buffer; 



int create_buffer(int filedes, Buffer buffer, ssize_t nbyte) {
 ssize_t i =0;
 char *c;

 c = (char*) malloc(nbyte*sizeof(char));

     buffer= (Buffer) malloc(sizeof(struct buffer));
     buffer->nrLido=nbyte;
     buffer->ler=(char *) malloc(sizeof(nbyte));
   
  while(i<nbyte) {
  

  
  write(1,buffer->ler,nbyte);

i++;
}

     if(buffer) return 1;
   
     else {return 0;} 
}

int destroy_buffer(Buffer buffer);







int main () {


Buffer buffer =NULL;
int n=0; 


 
 




return 0;


}

