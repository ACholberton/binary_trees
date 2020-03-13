#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - height of binary tree
 * @tree :- the tree.
 * Return:- count.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL)
		height = binary_tree_height(tree->right) + 1;
	if (tree->left != NULL)
		height = binary_tree_height(tree->left) + 1;
	return (height);
}
