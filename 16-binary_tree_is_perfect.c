#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	bool check;

	if (tree == NULL)
		return (0);

	check = wrapPerf(tree);
	return (check);
}

bool wrapPerf(const binary_tree_t *tree)
{
	int depth;

	depth = findDepth(tree);
	return (isPerfect(tree, depth, 0));
}

bool isPerfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return true;

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return false;

	return (isPerfect(tree->left, depth, level + 1) && isPerfect(tree->right, depth, level + 1));
}

int findDepth(const binary_tree_t *tree)
{
	int depth;

	depth = 0;
	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
