#include "header.h"
int	peek_stack(t_stack *head){
    if (is_empty(head)==0){
        return head->data;
    }
    else
        return INT_MIN;
}
