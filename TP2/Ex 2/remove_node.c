#include"header.h"
void remove_node(int i,t_list *L)
{
  int j;
	if(i==0)
	{
		  t_list temp=*L;
      *L=(*L)->next;
      free(temp);
			return;
	}
	t_list temp=*L;
	for(j=1;j<i;j++){
		temp=temp->next;
  }
	temp->next=temp->next->next;
	free(temp->next);
	return;
}
