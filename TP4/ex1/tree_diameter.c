#include "header.h"
int tree_diameter(tree T){
    if (T==NULL)
        return 0;
    if (T->left==NULL && T->right == NULL)
        return 1;
    return 1+tree_depth(T->left)+tree_depth(T->right);
}
