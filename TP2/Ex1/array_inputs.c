#include "header.h"
char** array_inputs(char **d,t_point T)
{
	int i,j;
	for (i=0;i<T.n;i++){
		for (j=0;j<T.m;j++){
			printf("entrer T[%d][%d] ",i,j);
			scanf("%d",&d[i][j]);
		}
	}
}
