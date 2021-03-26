#include "header.h"
char  **allocated_array(t_point T)
{
	char **d;
	int i;
	d=(char **)malloc(T.n*sizeof(char*));
	for (i=0 ;i<T.n ;i++)
		d[i]=(char *)malloc(T.m*sizeof(char));
	return d;	
}
