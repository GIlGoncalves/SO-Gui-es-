#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<time.h>


int main(int argc, char* argv[]) {

int res;
srandom(time(NULL));
res=random() % 3;
printf("%s : %d\n",argv[0],res);
return res;
}
