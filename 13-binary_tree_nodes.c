#include "binary_trees.h"

/**
 *binary_tree_nodes - this functions counts the nodes with at least 1 child
 *in a binary tree
 *@tree:is the binary tree
 *Return: the amount of nodes thaht contain a child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* checks if tree exists */

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left)+ 1);
	/* checks for nodes that have 1 child */ 
	else
		return(0);
}
