#include "header.h"
int palindrome(listeDouble L)
{
	//palindrome=1
	//n'est pas palindrome=0
	unsigned n;
	int i;
	n=L.longueur;
	celluleDouble *L1=L.debut;
	celluleDouble *L2=L.fin;
	if(listeDoubleVide(L)==1)
		return 0;
	for (i=0;i<n%2;i++)
	{

		if (L1->element!=L2->element)
			return 0;
		else
			{
				L1=L1->suivant;
				L2=L2->precedent;
			}
	} 
	return 1;
}
