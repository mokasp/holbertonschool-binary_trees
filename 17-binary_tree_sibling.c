#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parentNode, *leftNode, *rightNode, *siblingNode;
	int key;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	key = node->n;
	parentNode = node->parent;
	leftNode = parentNode->left;
	rightNode = parentNode->right;
	if (leftNode->n == key)
		siblingNode = rightNode;
	if (rightNode->n == key)
		siblingNode = leftNode;

	return (siblingNode);
}
