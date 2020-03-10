#include "binary_trees.h"

/**
 *binary_tree_node - Creates a Binary tre.e
 *@parent: is the starting point or root.
 *@value: is the value given to the parent.
 *Return: a node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
//checks if the node was malloc//

	node->left = NULL;
	node->right = NULL;
//sets the value to the node//
	node->n = value;
	node->parent = parent;

	return (node);

}
