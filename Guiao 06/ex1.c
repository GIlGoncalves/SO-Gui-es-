#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>







int main(int argc, char const *argv[])
{  
    int fifo;

	
	fifo=mkfifo("fifo",0666);





	return 0;
}
