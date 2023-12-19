#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){

int w=mat->r;
int k=mat->c;
if(w!=k)
	return -1;
double **dane=mat->data;
double **rhsv=b->data;
double* tmp;
for(int i=0;i<k-1;i++)
{
	double max=dane[i][i];
	for(int j=i+1;j<w;j++)
	{
	if(dane[j][i]>max)
	{
		tmp=dane[i];	
		dane[i]=dane[j];
		dane[j]=tmp;
		tmp=rhsv[i];
		rhsv[i]=rhsv[j];
		rhsv[j]=tmp;
	}
	}
	double a;
	for(int j=i+1;j<w;j++)
	{       if(dane[i][i])
		 	a=(dane[j][i]/dane[i][i]);
		else return 1;
		for(int z=i;z<k;z++)
			dane[j][z]-=a*dane[i][z];
		rhsv[j][0]-=a*rhsv[i][0];
	}

}

		return 0;
}

