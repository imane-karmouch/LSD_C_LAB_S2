#include "header.h"
int main(){
    int l;
    int s;
    t_stack *P=new_stack(5);
    push(&P,7);
    push(&P,2);
    print_stack(P);
    l=stack_len(P);
    printf("%d\n",l);
    s=peek_stack(P);
    printf("%d\n",s);
    pop(&P);
    print_stack(P);
    return 0;
}
