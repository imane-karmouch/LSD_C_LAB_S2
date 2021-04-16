#include "header.h"
list merge_liste(list L1,list L2){
  list temp1=L1;
  list temp2=L2;
  while (temp2!=NULL){
    inserer(temp2->data,&temp1);
    temp2=temp2->next;
  }
  list L=temp1;
  return L;
}
