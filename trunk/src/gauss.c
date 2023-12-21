#include "gauss.h"
#include <math.h>
/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){

int rows=mat->r;
int cols=mat->c;
double **data=mat->data;
double **b_data=b->data;
if(rows!=cols)
	return -1;
for(int i=0;i<cols-1;i++)
{
	int maxElem=i;
	for(int k=i+1;k<rows;k++)
	{
		if(fabs(data[k][i])>fabs(data[maxElem][i]))
			maxElem=k;
	}
	
	if(i!=maxElem)
	{
		double *tmp=data[i];
		data[i]=data[maxElem];
		data[maxElem]=tmp;

		double *tmpB=b_data[i];
		b_data[i]=b_data[maxElem];
		b_data[maxElem]=tmpB;
	}

	for(int j=i+1;j<rows;j++)
	{       if(data[i][i]==0)
		 	return 1;
		double n = data[j][i] / data[i][i];
		for(int z=i;z<cols;z++)
			data[j][z]-=n*data[i][z];
		b_data[j][0]-=n*b_data[i][0];
	}
}
		return 0;
}

