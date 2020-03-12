#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree using in-order
 * traversal
 * @tree: is the binary tree
 * @func: is a pointer
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* checks if the tree exists */

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

	/* traverses through from the left child? */
}
