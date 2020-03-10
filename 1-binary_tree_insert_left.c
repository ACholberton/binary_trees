#include "binary_trees.h"
/**
 * binary_tree_insert_left - adds a value to the left of the side of the parent.
 *@parent: is the root.
 *@value: is the value added.
 *Return: the added node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t * node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
		return (NULL);

	// Checks if malloc was succesfull//

	node->n = value;
	node->parent = parent;

	// assigns value to the root//

	if (parent->left)
	{
		parent->left->parent = node;
	}
	// Added node on the left child//

	node->right = NULL;
	node->left = parent->left;
	parent->left = node;

	return (node);
}
