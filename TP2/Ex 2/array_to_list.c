#include"header.h"
t_list array_to_list(int n, int T[])
{
  t_list L;
  L=create_node(T[0]);
  for (i=0;i<n;i++){
    add_node(L,T[i]);
  }
  return L;
}
