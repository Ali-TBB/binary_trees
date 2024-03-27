#include "binary_trees.h"
/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (left > right)
		return (left);
	else
		return (right);
}
