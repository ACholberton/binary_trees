#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a child is a leaf
 *@node: is the child
 *Return: 1 or 0 if its a leaf or not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/*Checks if node exists*/
	if (node->parent == NULL)
		return (1);
	/*checks if the next node in the tree is null*/
	else
		return (0);
}
