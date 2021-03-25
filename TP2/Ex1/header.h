#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct s_point
{
	int n;
	int m;
};
typedef struct s_point t_point;

int  **allocated_array(t_point T);
void array_inputs(int **d,t_point T);
void array_output(int **d,t_point T);



#endif
