#include "header.h"
tree insert(tree T,int x){
    if (T==NULL)
        return T=faireArbre(x,NULL,NULL);
    if (x==T->value)
        return T;
    if (x<T->value){
        insert(T->left,x);
        return T;
    }
    if (x>T->value){
        insert(T->right,x);
        return T;
    }    
}
