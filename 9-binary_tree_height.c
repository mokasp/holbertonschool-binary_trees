#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightHeight = 0, leftHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	                return (0);
	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}
