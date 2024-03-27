#include "binary_trees.h"

/**
 * binary_tree_inorder - Applies a function to each nodein a binary tree using
 * in a binary tree using inorder traversal.
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to the function to be applied to each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
