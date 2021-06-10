#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

typedef struct tree 
{
    int value;
    struct noeud * left;
    struct noeud * right;
}tree;
tree arbreVide()
{
    tree T=NULL;
    return T;
}

int estVide(tree T)
{
    if(T==NULL)
        return 1;
    return 0;
}

 int racine(treeT)
{
    if(estVide(T))
       exit(EXIT_FAILURE);
    return T->value;
}
tree gauche(tree T)
{
    if(estVide(T))
        return NULL;
    return T->left;
}
tree droit(tree T)
{
    if(estVide(T))
        return NULL;
    return T->right;
}
tree faireArbre(int x,tree T_1,tree T_2)
{
    tree T=(tree)malloc(sizeof(tree));
    T->value=x;
    T->left=T_1;
    T->right=T_2;
    return T;
}
void fixerCle(int x,tree * P)
{
    if(estVide(*P))
        exit(EXIT_FAILURE);
    else
    {
        (*P)->value=x;
        //return *P;
    }
}

// fixerGauche
void fixerGauche(tree G, tree * P)
{
    if(estVide(*P))
        exit(EXIT_FAILURE);
    else
    {
        
        (*P)->left=G;
        //return *P;
    }
}

void fixerDroit(tree D, tree * P)
{
    if(estVide(*P))
        exit(EXIT_FAILURE);
    else
    {
        
        (*P)->right=D;
        //return *P;
    }
}
tree insert(tree T,int x);
int recherche(int x, tree T);
int max_depth(tree T);
int tree_size(tree T);
#endif
