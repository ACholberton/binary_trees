 #include "binary_trees.h"
/**
 * binary_tree_insert_left - adds a value to the left of the side of the parent
 * @parent: is the root.
 * @value: is the value added.
 * Return: the added node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
		parent->left = node;
	}
	else
		parent->left = node;

	return (node);
}
