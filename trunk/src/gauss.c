#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){

int w=mat->r;
int k=mat->c;
double **dane=mat->data;
double tmp;
for(int i=1;i<w;i++)
{
	if(dane[i]>dane[0])
	{
		tmp=dane[0];	
		dane[0]=dane[i];
		dane[i]=tmp;
	}

}

		return 0;
}

