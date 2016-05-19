#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <sys/wait.h>

int segundos=0;
int controlcs=0;

void f(int signal) {


	switch(signal) {
	
		case SIGALRM:
		segundos++;
		alarm(1);
		break;
		case SIGINT:
		controlcs++;
		printf("segundos  %d\n",segundos );
		break;
		case SIGQUIT:
		printf("control-c = %d\n",controlcs );
		_exit(0);
		break;

	}




}


int main(int argc, char const *argv[])
{

	signal(SIGINT,f);
	signal(SIGQUIT,f);
	signal(SIGALRM,f);
	while(1) pause();
	return 0;
}