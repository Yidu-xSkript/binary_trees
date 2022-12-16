#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/*
 First recursively deletes left and right subtree 
 then delete root node 
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node->left == NULL && node->right == NULL)
        return (1);

    else
        return (0);
}
