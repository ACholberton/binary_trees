#include "binary_trees.h"

/**
 *binary_tree_sibling - function that finds the sibling of a node
 *@node: is the binary tree
 *Return: the found sibling else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tmp = node->parent;

	if (tmp->left == node)
		return (tmp->right);
	else
		return (tmp->left);
}
