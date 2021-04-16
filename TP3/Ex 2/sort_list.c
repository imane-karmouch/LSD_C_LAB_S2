#include "header.h"
list sort_list(list L){
    list temp=L;
    int a=0;
    int x=0;
    while(temp->next!=NULL){
        x=0;
        if (temp->data > temp->next->data){
            a=temp->data;
            temp->data=temp->next->data;
            temp->next->data=a;
            x=1;
        }
        if (x){
            temp=L;
        }
        else
            temp=temp->next;
    }
    return L;
}
