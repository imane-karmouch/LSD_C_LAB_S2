#include "header.h"
list remove_duplicated(list L){
    list T=NULL;
    list temp=L;
    while (temp!=NULL){
        if (recherche(temp->data,T)==NULL)
            ajoutFin(temp->data,&T);
        temp=temp->next;
    }
    return T;
}
