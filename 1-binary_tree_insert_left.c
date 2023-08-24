#include "binary_trees.h"

/**
 * *binary_tree_insert_left - insert node as left child in binary tree
 * @parent: parent node of new node
 * @value: value to insert into node
 *
 * Return: new node on success, null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode, *tmp;

	if (parent == NULL)
		return (NULL);
	leftNode = makeNode(parent, value);
	if (leftNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		tmp = parent->left;
		leftNode->left = tmp;
		tmp->parent = leftNode;
	}
	parent->left = leftNode;
	leftNode->parent = parent;
	return (leftNode);
}

/**
 * *makeNode - create node to insert
 * @parent: parent node of new node
 * @value: value to insert into node
 *
 * Return: new node on success, null on failure
 */
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
