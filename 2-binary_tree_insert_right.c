#include "binary_trees.h"

/**
 *binary_tree_insert_right - adds a new node at the right side of the tree
 *@parent: is the root
 *@value: is the value of the node
 *Return: the newly added node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	/* checks if malloc was succesfull */
	node->n = value;
	node->parent = parent;
	/* assigns value to the root */

	if (parent->right)
	{
		parent->right->parent = node;
	}
	/* added new node to the right child */
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;

	return (node);
}
