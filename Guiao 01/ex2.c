#include <unistd.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {

int fp;
char a='a';
if(argc !=2)
{

       return 4;

}

fp=open(argv[1], O_CREAT|O_WRONLY, 0666);

if(fp<0) {
    
   
   perror(argv[1]);

}

int i=0;
  for( i=0; i<1024*1024*10;i++) {

   write(fp,&a,sizeof(a));

}

close(fp);





return 0;

}
