#include "header.h"
int recherche(int x, tree T){
    if (T=NULL)
        return 0;
    if (T->value ==x)
        return 1;
    if (T->value>x)
        return recherche(x,T->left);
    if (T->value<x)
        return recherche(x,T->right);    
}
