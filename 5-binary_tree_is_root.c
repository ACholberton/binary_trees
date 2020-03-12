#include "binary_trees.h"

/**
 * binary_tree_is_root - main function checking for the root
 * @node :- is the node or any node.
 * Return:- is zero
 */

int binary_tree_is_root(const binary_tree_t *node)
{


	if (node == NULL)
	{
		return (0);
	}

	if (node->parent)
	{

		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
