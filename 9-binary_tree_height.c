#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - height of binary tree
 * @tree :- the tree.
 * Return:- zero
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (-1);
	}
	else
	{
		size_t leftHeight = binary_tree_height(tree->left);
		size_t rightHeight = binary_tree_height(tree->right);

		if (leftHeight < rightHeight)
		{
			return (leftHeight + 1);
		}
		else
		{
			return (rightHeight + 1);
		}
	}
	return (0);
}
