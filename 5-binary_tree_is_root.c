#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node in a binary tree is the root node
 * @node: Pointer to the node to check
 *
 * Return: true if the node is the root node, otherwise false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
