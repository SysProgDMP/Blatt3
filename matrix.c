#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mymatrix.h"


int main(int argc, char *argv[]){
	
	void *operation;
	char eingabedatei, ausgabedatei;
	MATRIX *m1, *m2, *m3;
	printf("%s", argv[1]);
	
	if(strcmp(argv[1], "Multiplikation")==0){
		operation=&matrix_mult;
	}
	if(strcmp(argv[1], "addieren")==0){
		operation=&matrix_add;
	}
	else{
		fprintf(stdout, "Bitte gueltige Operation eingeben\n");
		return 1;
	}
	
	eingabedatei=argv[2];
	ausgabedatei=argv[4];
	
	FILE *input=fopen(eingabedatei1, "r");
	if(datei==NULL){
		printf("Fehler beim öffnen der ersten Eingabedatei");
		return 1;
	}
	
	
	
	
	return 0;
}
