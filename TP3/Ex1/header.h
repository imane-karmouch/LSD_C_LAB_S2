
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
int listeDoubleVide(listeDouble L)
{
    if(L.debut==NULL)
        return 1;
    return 0;
}
void ajoutDebut(int x,listeDouble * L)
{
    celluleDouble * C=(celluleDouble *)malloc(sizeof(celluleDouble));
    C->element=x;
    C->suivant=L->debut;
    C->precedent=NULL;
    if(listeDoubleVide(*L)==1)
    {
        L->debut=C;
        L->fin=C;
        L->longueur=1;
        return;
    }
    L->debut->precedent=C;
    L->debut=C;
    L->longueur+=1;
    return;
}
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
