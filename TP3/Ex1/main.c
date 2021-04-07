#include "header.h"
int main (int ac,char **av)
{
	listeDouble L={NULL,NULL,0};
	int T;
	printf("%d\n",ac);
	printf("%s\n",av[1]);
	L=convert_string(av[1]);
	T=palindrome(L);
	printf("%d\n",T);
	int i=0;
	while(i<ac)
	{
		printf("%s\n",av[i]);
		i++;
	}
	return 0;
}
