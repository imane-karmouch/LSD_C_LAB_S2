#include "header.h"

/*
** Note: iterating pointer array is the same as stack array.
*/
void    print_table(int *tab, int size)
{
    for (i=0;i<size;i++)
    {
        printf("%d \n",tab[i]);
    }
    return;
}
