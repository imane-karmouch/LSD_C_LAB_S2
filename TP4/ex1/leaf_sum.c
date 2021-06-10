#include "header.h"
int leaf_sum(tree T){
    if (T==NULL)
        return 0;
    return 1+leaf_sum(T)
}
