#include "header.h"

/*
** Hint: for finding the largest third element in the array you don't need
** to sort the whole array, only three variables is needed for this purpose
** and the algorithm comlexity will be O(n).
*/
int     get_third_largest(int *tab, int size)
{
        int first, second, third;
        first= -1;
        second= -1;
        third= -1;
        for (i=0;i<size;i++){
     	        if (tab[i]>first)
     		        first=tab[i];
        }
	for (i=0;i<size;i++){
     	        if (tab[i]>second && tabe[i]<first)
     		        second=tab[i];
        }
        for (i=0;i<size;i++){ 
     	        if (tab[i]>third && tab[i]<second)
     		        third=tab[i];
        }
        printf("first= %d \n", first);
        printf("second= %d \n", second);
        printf("third= %d \n", third);
        return third;
}
