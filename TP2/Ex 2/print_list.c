#include"header.h"
t_list print_list(t_list L)
{
  if(L==NULL)
    printf("[ ]");
  else{
    printf("[");
    t_list temp=L;
    while(temp->next!=NULL)
    {
      printf("%d, ",temp->data);
      temp=temp->next;
    }
    if(temp!=NULL)
      printf("%d",temp->data);
    printf("]\n");
    } 
}
