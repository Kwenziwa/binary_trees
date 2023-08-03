#include "binary_trees.h"
/**
 * binary_tree_size - method that return the a_size of a tree
 * @atree: tree to check
 * Return: size of atree
 */
size_t binary_tree_size(const binary_tree_t *atree)
{
	size_t a_size = 0, m = 0, k = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		k = binary_tree_size(atree->left);
		m = binary_tree_size(atree->right);
		a_size = m + k + 1;
	}
	return (a_size);
}
