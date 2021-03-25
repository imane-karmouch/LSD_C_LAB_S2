#include "header.h"
void array_output(int **d,t_point T)
{
	int i,j;
	for (i=0;i<T.n;i++)
	{
		for (j=0;j<T.m;j++)
		{
			printf("%d ",d[i][j]);	
		}
	}	
}
