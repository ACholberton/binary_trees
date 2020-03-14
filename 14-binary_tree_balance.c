#include "binary_trees.h"

/**
 * binary_tree_height_2 - height of binary tree
 * @tree :- the tree.
 * Return:- count.
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		return (1 + binary_tree_height_2(tree->left));
	else
		return (1 + binary_tree_height_2(tree->right));
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
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	right = binary_tree_height_2(tree->right) - 1;
	left = binary_tree_height_2(tree->left) - 1;
	return (left - right);
}
