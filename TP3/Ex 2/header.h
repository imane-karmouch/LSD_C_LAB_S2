#ifndef HEADER
#define HEADER

#include<stdio.h>
#include<stdlib.h>
#include>time.h>
struct node
{
  int data;
  struct node *next;
};
typedef struct node node;
typedef node * list;
void affichageListe(list L)
{
    if(L==NULL)
        printf("[ ]");
    else
    {
        printf("[");
        list temp=L;
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
void ajoutDebut(int x,list * L)
{
    node * C=(node *)malloc(sizeof(node));
    C->data=x;
    C->next=*L;
    *L=C;
    return;
}
void ajoutFin(int x,list * L)
{
    list C=(list)malloc(sizeof(node));
    C->data=x;
    C->next=NULL;

    if(*L==NULL)
        *L=C;
    else
    {
        list temp=*L;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=C;
    }
}
void inserer(int x,list *L){
    if((*L) == NULL ){
		ajoutDebut(x,L);
        return ;
	}
    list temp=(*L);
    if (x<(temp->data)){
        ajoutDebut(x,L);
        return ;
    }
    while(temp->next!=NULL){
        if ((temp->data)<x && (temp->next->data)>x || temp->data==temp->next->data){
            list c = (list)malloc(sizeof(node));
			c -> data = x;
			c -> next = (temp)->next;
			temp->next = c;
			return;
        }
        temp=temp->next;
    }
    ajoutFin(x,L);
    return;
}
list recherche(int x,list L){
    list temp=L;

    while(temp!=NULL){
        if (x==temp->data)
            return temp;
        temp=temp->next;
    }
    return NULL;
}
list sort_list(list L);
list merge_liste(list L1,list L2);
list remove_duplicated(list L);

#endif

