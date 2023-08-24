#include "binary_trees.h"

/**
 * binary_tree_nodes - finds number of nodes in binary tree
 * @tree: binary tree to find number of nodes in
 *
 * Return: number of nodes on success, 0 on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (left + right + 1);
}
