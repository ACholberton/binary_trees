#include "binary_trees.h"

/**
 *binary_tree_size-measures the size of a binary tree
 *@tree: is th ebinary tree
 *Return: the size of the tree
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/* checks if the tree exists */

	return (binary_tree_size(tree->right) + binary_tree_size(tree->left)
		+ 1);
/* measures the right and left sides of the binary tree */
}
