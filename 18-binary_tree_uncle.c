#include "binary_trees.h"

/**
 *binary_tree_uncle - function that finds the uncle of a node
 *@node: is a node in the binary tree
 *Return: the found node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	tmp = node;
	tmp = tmp->parent;

	if (tmp->parent->left == tmp)
		return (tmp->parent->right);
	else
		return (tmp->parent->left);
}
