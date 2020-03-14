#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: is the tree
 *Return: the amount of nodes or 0 if it is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
<<<<<<< HEAD
=======
	int counter_1;
	int counter_2;

>>>>>>> 901f369ce9b0e9facb3056d08698dfab330500cc
	/* check if the tree exists */
	if (tree == NULL)
		return (0);

	/* checks if the left side and right side are NULL */
	if (tree->left == NULL && tree->right == NULL)
<<<<<<< HEAD
		return (1);
=======
		return (0);

>>>>>>> 901f369ce9b0e9facb3056d08698dfab330500cc


<<<<<<< HEAD
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
=======
	if (counter_1 == 1 && counter_2 == 1)
		return (1);
	if (counter_1 && counter_2)
		return (0);
	else
		return (0);
>>>>>>> 901f369ce9b0e9facb3056d08698dfab330500cc
}
