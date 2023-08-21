#include "binary_trees.h"

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