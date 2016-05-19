#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>





int main(int argc, char const *argv[])
{
	int ficheiro = open("fifo",O_WRONLY);
	
 char line[1024];
    int n;
	while((n=read(0,line,sizeof(line+1)))>0){

			write(ficheiro,line,n);
       


     }

     


	return 0;
}