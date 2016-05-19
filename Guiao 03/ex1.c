#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>

int main (int argc, char * argv[]) {

execlp("ls","ls","-l",NULL);
perror ("Não funcionou");

return 1;

}



