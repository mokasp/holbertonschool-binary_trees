#include "binary_trees.h"

/**
 * *binary_tree_node - insert node into binary tree
 * @parent: parent node of new node
 * @value: value to insert into node
 *
 * Return: new node on success, null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
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


