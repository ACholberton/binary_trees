#include "binary_trees.h"

/**
 *binary_tree_leaves - measures the amount of leaves in a binary tree
 *@tree: is the binary tree
 *Return: the amount of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* chekcs if the tree exists */

	if (tree->right == NULL || tree->left == NULL)
	{
		return (1);
	}
	/* checks for leafs in the right and left side of the tree*/

	else
		return (binary_tree_leaves(tree->right)
			+ binary_tree_leaves(tree->left));
}
