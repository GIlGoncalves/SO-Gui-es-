#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ARRAY_MAX_SIZE 100

// linkar com lreadline

void limpaArray(char *array[]){
	int i;
	for (i=0;i<ARRAY_MAX_SIZE;i++)
		array[i]=NULL;
}

int main(int argc, char** argv){
	pid_t filho;
	int  status, terminator=0;
	char* array[ARRAY_MAX_SIZE];
	char* catraz = (char*) malloc (sizeof(char)*100);
	char* result;
	int pos=0;
	
	printf("minhabash> ");
	while(fgets(catraz, 100, stdin) != NULL) {
                    if (strcmp(catraz,"exit\n")==0) {break;}
   else {
		catraz[strlen(catraz)-1] = '\0';
		terminator=0;
		


		result = strtok(catraz," ");
		while( result != NULL ) {
			array[pos]=result;
			pos++;
			result = strtok (NULL," ");
		}
		if(strcmp(array[pos-1], "&") == 0){
				terminator=1;
				array[pos-1]=NULL;
		}
               
		filho = fork();
		if(filho==0){
			execvp(array[0], array);
		} else {
			if(!terminator){
				waitpid(filho,&status,0);
			}
		}
	
		printf("\nminhabash> ");
		
		pos=0;
		limpaArray(array);
	} 

 }      
        
	free(result);
	free(catraz);

  return 0;
   
}


