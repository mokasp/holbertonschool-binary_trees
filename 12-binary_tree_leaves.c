#include "binary_trees.h"

/**
 * binary_tree_leaves - finds number of leaves in binary tree
 * @tree: binary tree to find number of leaves in binary tree
 *
 * Return: number of nodes on success, 0 on failure
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves = (binary_tree_leaves(tree->left)) + (binary_tree_leaves(tree->right));
	return (leaves);
}
