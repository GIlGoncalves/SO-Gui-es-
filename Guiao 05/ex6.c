#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>




int main(int argc, char const *argv[])
{
	int pide[2];
    pid_t filho;
    
    pipe(pide);

     filho=fork();

      if(filho==0) {

      	








      }






















	return 0;
}




