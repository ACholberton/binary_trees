#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree using
 * pre-order traversal
 * @tree: is the binary tree
 * @func: is afunction pointer
 * Return Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* checks if tree exists */

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	/* call the function? to pre-order the binary tree */
}
