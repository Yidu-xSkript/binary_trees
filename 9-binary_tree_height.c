#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return 1 + max(height(tree->left), height(tree->right));
}
