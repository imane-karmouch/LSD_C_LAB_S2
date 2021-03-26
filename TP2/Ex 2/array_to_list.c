#include"header.h"
t_list array_to_list(int n, int T)
{
  int i;
  t_list L;
  L=create_node(T[0]);
  for (i=1;i<n;i++){
    add_node(T[i],L);
  }
  return L;
}
