#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node = binary_tree_node(parent, value);

    if (parent == NULL || node == NULL) 
        return (NULL);

    if (parent->left != NULL)
    {
        node->left = parent->left;
        parent->left->parent = node;
    }
    parent->left = node;

    return (node);
}
