#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


int main (int argc , char*argv[]) {
  int n= atoi(argv[1]);
  int i=0;
 char * c;

 c=(char *)malloc (n*sizeof(char));
 int fp = open(argv[2], O_CREAT|O_WRONLY, 0666); 

if (fp ==-1) return 1;

 
while ((read(0,c,n))>0) 
{
   write (fp,c,sizeof(c));

   }
   return 0;
}
