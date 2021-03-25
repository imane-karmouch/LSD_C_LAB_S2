#include "header.h"
int  **allocated_array(t_point T)
{
	int **d;
	int i;
	d=(int **)malloc(T.n*sizeof(int*));
	for (i=0 ;i<T.n ;i++)
		d[i]=(int *)malloc(T.m*sizeof(int));
	return d;	
}
