#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(const binary_tree_t *node)
{
	binary_tree_t *gParentNode, *parentNode, *uncleNode, *rightNode, *leftNode;
	int key;

	if (node == NULL)
		return (0);
	
	parentNode = node->parent;
	key = parentNode->n;
	gParentNode = parentNode->parent;
	if (gParentNode == NULL || gParentNode->left == NULL || gParentNode->right == NULL)
		return (NULL);
	leftNode = gParentNode->left;
	rightNode = gParentNode->right;
	if (key == leftNode->n)
		uncleNode = rightNode;
	else if (key == rightNode->n)
		uncleNode = leftNode;

	return (uncleNode);
}