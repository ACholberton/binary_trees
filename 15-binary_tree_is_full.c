#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: is the tree
 *Return: the amount of nodes or 0 if it is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int counter_1 = 0;
	int counter_2 = 0;

	/* check if the tree exists */
	if (tree == NULL)
		return (0);

	/* checks if the left side and right side are NULL */
	if (tree->left == NULL || tree->right == NULL)
		return (0);


	counter_1 = (binary_tree_is_full(tree->left) + 1);
	counter_2 = (binary_tree_is_full(tree->right) + 1);

	if (counter_1 == 1 && counter_2 == 1)
		return (1);
	else
		return (0);
}
