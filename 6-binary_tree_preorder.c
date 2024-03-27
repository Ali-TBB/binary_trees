#include "binary_trees.h"

/**
 * binary_tree_preorder - Applies a function to each node
 * in a binary tree using preorder traversal
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to the function to be applied to each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
