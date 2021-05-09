#include "header.h"
void print_stack(t_stack *head){
    t_stack *temp=head;
    while(temp->next!=NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    if(temp!=NULL)
        printf("%d\n",temp->data);
}
