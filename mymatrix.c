#include "mymatrix.h"



MATRIX *matrix_create(FILE *f){
	int i;
	char buffer;
	MATRIX *m=malloc(sizeof(MATRIX));
	m->rows=10;
	m->collumns=10;
	m->matrix=malloc(rows*sizeof(long*));
	for(i=0; i<collumns; i++){
		m->matrix[i]=malloc(rows*sizeof(int));
	}
	i=0;
	fgets(buffer, 10000, f);
	while(fgets(buffer, 10000, f)){
		
	}
}

MATRIX *matrix_mult(MATRIX a, MATRIX b){

	return a;
}
MATRIX *matrix_add(MATRIX a, MATRIX b){

	return a;
}
