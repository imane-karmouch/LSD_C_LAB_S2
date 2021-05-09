#include "header.h"
void push(t_stack **head, int data){
    if (is_empty(*head)==0){
        t_stack *C=(t_stack*)malloc(sizeof(t_stack));
        C->data=data;
        C->next=*head;
        *head=C;
        }
    else
        *head= new_stack(data);
}
