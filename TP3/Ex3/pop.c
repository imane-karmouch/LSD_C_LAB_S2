#include "header.h"
int pop(t_stack **head){
    if (is_empty(*head)==0){
        int r=(*head)->data;
        t_stack *temp=*head;
        (*head)=(*head)->next;
        free(temp);
        return r;
    }
    else{
         return INT_MIN;
    }
}
