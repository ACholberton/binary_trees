#include "binary_trees.h"
#include <stdio.h>
/**
 *
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{


	if (tree == NULL)
	{
		return(-1);
	}

	binary_tree_height(tree->left);
	binary_tree_height(tree->right);

	return((binary_tree_height(tree->left), binary_tree_height(tree->right))+ 1);

}
