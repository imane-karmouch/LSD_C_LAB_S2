#include "header.h"

void add_node(int data, t_list L)
{
 t_list C=create_node(data);
 if(*L==NULL)
     *L=C;
 else {
    t_list temp=*L;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->suivant=C;
  }
  return;
}
