#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: is the tree
 *Return: the amount of nodes or 0 if it is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* check if the tree exists */
	if (tree == NULL)
		return (0);

	/* checks if the left side and right side are NULL */
	if (tree->left == NULL && tree->right == NULL)
		return (1);


	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
