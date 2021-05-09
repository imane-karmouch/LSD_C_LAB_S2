#include "header.h"
t_stack *new_stack(int data){
    t_stack *C=(t_stack *)malloc(sizeof(t_stack));
    C->data=data;
    C->next=NULL;
    return C;
}
