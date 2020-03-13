#include "binary_trees.h"

/**
 * binary_tree_height - height of binary tree
 * @tree :- the tree.
 * Return:- count.
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	height_right = binary_tree_height_2(tree->right);
	height_left = binary_tree_height_2(tree->left);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 *binary_tree_balance - Gets the balance factor of a binary tree
 *@tree: is the binary tree
 *Return: rhe balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_height_2(tree->right);
	left = binary_tree_height_2(tree->left);
	return (right - left);
}
