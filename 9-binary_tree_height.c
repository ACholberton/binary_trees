#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - height of binary tree
 * @tree :- the tree.
 * Return:- count.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (new_func(tree) + 1);
}

/**
 * new_func - that takes left and right leafs in for calculation
 * @tree: given tree
 * Return:- the max number between two leafs
 */

size_t new_func(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (-1);
	}
	binary_tree_height(tree->left);
	binary_tree_height(tree->right);

	return (max(binary_tree_height(tree->left),
		    binary_tree_height(tree->right)));
}

/**
 * max - find the max betwee two numbers
 * @num1: first given integer
 * @num2: second given integer
 * Return:- nothing.
 */

int max(int num1, int num2)
{
	if (num1 > num2)
	{
		return (num1);
	}
	else
	{
		return (num2);
	}
	return (0);
}
