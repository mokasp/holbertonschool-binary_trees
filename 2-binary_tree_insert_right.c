#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode, *tmp;

	if (parent == NULL)
		return (NULL);
	rightNode = makeNode(parent, value);
	if (rightNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		tmp = parent->right;
		rightNode->right = tmp;
		tmp->parent = rightNode;
	}
	parent->right = rightNode;
	rightNode->parent = parent;
	return (rightNode);
}

binary_tree_t *makeNode(binary_tree_t *parent, int value)
{
        binary_tree_t *newNode;

        newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
        if (newNode == NULL)
                return (NULL);
        newNode->n = value;
        newNode->parent = parent;
        newNode->left = NULL;
        newNode->right = NULL;
        return (newNode);
}
