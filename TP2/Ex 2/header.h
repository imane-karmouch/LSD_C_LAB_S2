#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int x;
  struct node *next;
};
typedef struct node node;
typedef node* t_list;

t_list create_node(int x);
void add_node(int value, t_list L);
t_list array_to_list(int x, int T[]);
void print list(t_list L);
void remove_node(t_list *L,int i);

#endif
