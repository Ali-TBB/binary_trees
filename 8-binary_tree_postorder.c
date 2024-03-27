#include "binary_trees.h"
/**
 * binary_tree_postorder - Applies a function to each node
 *in a binary tree using postorder traversal
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to the function to be applied to each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL) return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);  
}
