#include "header.h"
int main() 
{
    time_t t;
    int i;
    int j;
    list L;
    list T;  
    list M;
    list S;
    L = T = M = S= NULL;
    srand((unsigned) time(&t));

    for (i=0; i<5; i++){
      ajoutFin(rand()%100+1,&L);
    }
    for (j=0; j<4; j++){
      ajoutFin(rand()%100+1,&T);
    }
    affichageListe(L);
    affichageListe(T);

    L=sort_list(L);
    T=sort_list(T);
    affichageListe(L);
    affichageListe(T);

    M=merge_liste(L,T);
    affichageListe(M);
    S=remove_duplicated(M);
    affichageListe(S);

    return 0;
}
