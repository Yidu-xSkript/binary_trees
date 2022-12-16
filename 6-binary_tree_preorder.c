#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
        return;

    binary_tree_preorder(tree->left, binary_tree_preorder);
    binary_tree_preorder(tree->right, binary_tree_preorder);
}
