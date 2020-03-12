#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary
 *tree
 *@tree: is the binary tree
 *Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
/* checks if tree exists and returns 0 if it does not */

	for (depth = 0; tree->parent != NULL; depth++)
	{
		/* moves through the tree and increments every level*/
		tree = tree->parent;
	}
	return (depth);
}
