#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};
typedef struct node node;
typedef node* t_list;

t_list create_node(int data);
void add_node(int datat, t_list L);
t_list array_to_list(int data, int T[]);
void print_list(t_list L);
void remove_node(t_list *L,int i);

#endif
