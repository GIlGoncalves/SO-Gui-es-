#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t readln(int fildes, void *buf, size_t nbyte) {
   char *c ;
   int i=0,n;
  
   for(i=0;i!=nbyte && (n=read(fildes,(char*)buf+i,1))>0 && 
   *((char*)buf+i)!='\n';i++);
  


      return i;
}

int main () { 

   char line[1024], number[16];
	int n, nl=1;
	while((n=readln(0,line,sizeof(line)))>0){
		sprintf(number,"%d\t",nl);
		write(1,number,strlen(number));
		write(1,line,n);
                printf("\n");
 
		nl++;
	}





return 0;




}
