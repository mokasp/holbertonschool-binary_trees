#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of binary tree
 * @tree: binary tree to find depth of
 *
 * Return: depth of tree on success, 0 on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	if (tree->parent == NULL)
		return (0);
	return (depth + 1);
}
