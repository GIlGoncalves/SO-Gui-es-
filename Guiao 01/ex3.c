#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


int main (int agrc, char *argv[]) {

 int n= atoi(argv[1]);
  
 char *c;

 c = (char*) malloc(n*sizeof(char)); 
 
 while ((read (0,c,n))>0) {
    write (1,c,n);
  }
 free(c);
   return 0;

}
