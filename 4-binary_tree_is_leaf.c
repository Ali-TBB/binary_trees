#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node in a binary tree is a leaf node
 * @node: Pointer to the node to check
 *
 * Return: true if the node is a leaf node, otherwise false
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
