#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	
	void *operation;
	printf("%s", argv[0]);
	
	if(strcmp(argv[1], "Multiplikation")==0){
		operation=&matrix_mult;
	}
	if(strcmp(argv[1], "addieren")==0){
		operation=&matrix_add;
	}
	
	
	FILE *f=fopen
	return 0;
}