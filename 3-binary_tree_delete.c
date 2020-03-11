#include "binary_trees.h"

/**
 *
 *
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	free(tree->right->right);
	free(tree->right->left);
	free(tree->left->right);
	free(tree->left->left);
	free(tree->right);
	free(tree->left);
	free(tree);

}
