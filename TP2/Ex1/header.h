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

char  **allocated_array(t_point T);
void array_inputs(char **d,t_point T);
void array_output(char **d,t_point T);
void flood_fill(char** d, t_point T,t_point dim,char s, char p);

#endif
