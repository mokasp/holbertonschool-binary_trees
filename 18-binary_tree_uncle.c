#include "binary_trees.h"

/**
 * binary_tree_uncle - find a nodes uncle node
 * @node: node to check
 *
 * Return: uncle node on success, null on failure
 */
binary_tree_t *binary_tree_uncle(const binary_tree_t *node)
{
	binary_tree_t *gParentNode, *parentNode, *uncleNode, *rightNode, *leftNode;
	int key;

	if (node == NULL)
		return (0);

	parentNode = node->parent;
	if (parentNode == NULL)
		return (NULL);
	key = parentNode->n;
	gParentNode = parentNode->parent;
	if (gParentNode == NULL)
		return (NULL);
	if (gParentNode->left == NULL || gParentNode->right == NULL)
		return (NULL);
	leftNode = gParentNode->left;
	rightNode = gParentNode->right;
	if (key == leftNode->n)
		uncleNode = rightNode;
	else if (key == rightNode->n)
		uncleNode = leftNode;

	return (uncleNode);
}
