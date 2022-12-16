#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stddef.h>

/**
 * struct binary_tree - A new type describing a binary tree.
 * @value: The value of the tree.
 */
struct binary_tree
{
	int n;
	struct binary_tree* parent;
	struct binary_tree* left;
	struct binary_tree* right;
};

/**
 * binary_tree_t - Typedef for struct binary_tree
 */
typedef struct binary_tree binary_tree_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);

#endif
