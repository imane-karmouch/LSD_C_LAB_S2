#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int element;
  struct node *next;
};
typedef struct node node;
typedef node* t_list;

t_list create_node(int element);
void add_node(int element, t_list L);
t_list array_to_list(int element, int T[]);
void print_list(t_list L);
void remove_node(t_list *L,int i);

#endif
