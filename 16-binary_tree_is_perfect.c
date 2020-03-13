#include "binary_trees.h"
/**
 * binary_tree_height_2 - height of binary tree
 * @tree :- the tree.
 * Return:- count.
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL)
		height_right = binary_tree_height_2(tree->right) + 1;
	if (tree->left != NULL)
		height_left = binary_tree_height_2(tree->left) + 1;
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: is the binary tree
 *Return: 1 if the tree is perfect and 0 if its not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_side = binary_tree_height_2(tree->left);
	right_side = binary_tree_height_2(tree->right);

	if (left_side == right_side)
		return (1);
	else
		return (0);
}
