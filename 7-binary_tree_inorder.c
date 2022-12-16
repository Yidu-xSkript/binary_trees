#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_inorder(tree->left, func);
    func(tree->value);
    binary_tree_inorder(tree->right, func);
}
