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

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);

	if (parent->right)
	{

		node->right = parent->right;
		node->right->parent = node;
		parent->right = node;
	}
	else
	{
		parent->right = node;
	}
	return (node);
}
