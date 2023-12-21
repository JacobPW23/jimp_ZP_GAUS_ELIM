#include <stdio.h>
#include "backsubst.h"
/**
 * Zwraca 0 - wsteczne podstawienie zakonczone sukcesem
 * Zwraca 1 - błąd dzielenia przez 0 (element na diagonali = 0)
 * Zwraca 2 - błąd nieprawidłowych rozmiarów macierzy
 */
int  backsubst(Matrix *x, Matrix *mat, Matrix *b) {
	if((mat->r)!=(mat->c))
	{
		printf("Blad. Nieprawidlowy rozmiar macierzy.\n");
		return 2;
	}
	else {
		int ir, ic;
		double suma=0.0;
		int n=mat->r;
	
		for(ir=n-1;ir>=0;ir--)
		{
			suma=0;
			for(ic=ir+1;ic<n;ic++)
			{	
				suma=suma + mat->data[ir][ic] * x->data[ic][0];		
			}
		
			if(mat->data[ir][ir]==0)
                	{
                        	printf("Blad. Dzielenie przez zero.\n");
                        	return 1;
                	}

			x->data[ir][0] = (b->data[ir][0] - suma)/mat->data[ir][ir];
		}

	}

	return 0;
}


