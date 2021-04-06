
#ifndef HEADER
#define HEADER

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct celluleDouble
{
    char element;
    struct celluleDouble * suivant;
    struct celluleDouble * precedent;
};
typedef struct celluleDouble celluleDouble;
struct listeDouble
{
    celluleDouble * debut;
    celluleDouble * fin;
    unsigned longueur;
};
typedef struct listeDouble listeDouble;
void ajoutFin(char x,listeDouble *L)
{
    celluleDouble * C=(celluleDouble *)malloc(sizeof(celluleDouble));
    C->element=x;
    C->precedent=L->fin;
    C->suivant=NULL;

    if(listeDoubleVide(*L)==1)
    {
        ajoutDebut(x,L);
        return;
    }
    L->fin->suivant=C;
    L->fin=C;
    L->longueur+=1;
    return;
}
listeDouble convert_string(char *av);
int palindrome(listeDouble L);

#endif
