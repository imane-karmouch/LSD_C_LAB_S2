#include "header.h"
int stack_len(t_stack *head){
    int l = 0;
    t_stack *temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
   return l;
}
