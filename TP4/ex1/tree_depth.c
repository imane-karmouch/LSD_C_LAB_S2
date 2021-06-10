#include "header.h"
int tree_depth(tree T){
    if (T==NULL)
        return 0;
    if (T->left==NULL && T->right == NULL)
        return 1;
    if ( T->left==NULL)
        return 1+tree_depth(T->right);
    if (T->right==NULL)
        return 1+tree_depth(T->left);
    return max(tree_depth(T->left),tree_depth(T->right));
}
