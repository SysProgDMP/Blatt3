#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_

typedef struct MATRIX{
	long ** matrix;
	int rows;
	int collumns;
}MATRIX;

MATRIX *matrix_create(FILE *f);
MATRIX *matrix_mult(MATRIX a, MATRIX b);
MATRIX *matrix_add(MATRIX a, MATRIX b);
#endif
