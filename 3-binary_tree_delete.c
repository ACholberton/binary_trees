#include "binary_trees.h"

/**
 * binary_tree_delete - delete nodes in binary tree.
 * @tree :- tree.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	free(tree->right->right);
	free(tree->left->right);
	free(tree->right);
	free(tree->left);
	free(tree);

}
