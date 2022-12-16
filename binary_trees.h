#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree - A new type describing a binary tree.
 * @value: The value of the tree.
 */
struct binary_tree
{
	int value;
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

#endif
