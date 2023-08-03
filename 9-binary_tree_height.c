#include "binary_trees.h"

/**
 * binary_tree_height - method that measures the height of a binary tree
 * @a_tre: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *a_tre)
{
	size_t k = 0;
	size_t m = 0;

	if (a_tre == NULL)
	{
		return (0);
	}
	else
	{
		if (a_tre)
		{
			k = a_tre->left ? 1 + binary_tree_height(a_tre->left) : 0;
			m = a_tre->right ? 1 + binary_tree_height(a_tre->right) : 0;
		}
		return ((k > m) ? k : m);
	}
}
