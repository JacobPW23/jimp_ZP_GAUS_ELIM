#ifndef _MAT_IO_H
#define _MAT_IO_H
#define MAX_ROWS 1000
typedef struct _Matrix {
				int r,c;
				double **data;
} Matrix;

extern int swaps[MAX_ROWS];

/**
 * Zwraca 0 - udalo sie wczytac
 * Zwraca 1 - podczas wczytywania wystapil blad
 */
Matrix * readFromFile(char * fname);
void printToScreen(Matrix *mat);

Matrix * createMatrix(int r, int c);
void freeMatrix(Matrix *mat);

void swapSolutions(Matrix *x, int swaps[]);
#endif
