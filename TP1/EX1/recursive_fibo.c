#include "header.h"

int recursive_fibo(int n)
{
    if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}
	return (Fibb_recur(n-1)+Fibb_recur(n-2));
}
