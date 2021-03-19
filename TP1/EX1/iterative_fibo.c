#include "header.h"

int iterative_fibo(int n)
{
    int f0=0,f1=1,f=0;
	for (int i=2;i<=n;i++){
		f=f0+f1;
		f0=f1;
		f1=f;
	}
	return f;
}
