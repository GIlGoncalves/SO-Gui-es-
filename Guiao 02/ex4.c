#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

 
int main() {

pid_t filho;
int values[MAX];
int i=0;
pid_t pais[MAX];


  for(i=0;i<MAX;i++) {

 filho=fork();

  if (filho<0) return -1;

 else {

   if(filho==0) {
      
     printf("Pid do pai=%d , seu pid=%d\n",getppid(),getpid());
            _exit(0);
           }
   else {
       printf("%d\n",filho); 
       pais[i]=filho;
           } 

      }



}

for(i=0;i<MAX;i++){
		waitpid(pais[i],&values[i],0);
	}
	printf("eu sou o pai: %d\n",getpid());


  return 0;
}













