#include"header.h"
int main(){
  int data;
  printf("entrer le nombre du premier element de la liste: \n");
	scanf("%d", &data);
  t_list L=create_node(data);
  print_list(L);
  
  
  
}
