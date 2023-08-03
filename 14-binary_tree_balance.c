#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t k = 0;
	size_t p = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			k = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			p = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((k > p) ? k : p);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r_side = 0, l_side = 0, sm = 0;

	if (tree)
	{
		l_side = ((int)binary_tree_height_b(tree->left));
		r_side = ((int)binary_tree_height_b(tree->right));
		sm = l_side - r_side;
	}
	return (sm);
}
