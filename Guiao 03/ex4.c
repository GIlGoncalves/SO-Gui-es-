#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>


int main (int argc, char * argv[]) {


execv("./ex3",&argv[1]);
perror("Não funcinou");




return 1;

}

