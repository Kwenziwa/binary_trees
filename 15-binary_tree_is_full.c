#include "binary_trees.h"
/**
 * binary_tree_is_full - method that says if a tree is full or not
 * a tree is full if it has tow or none children
 * @tree: tree to check
 * Return: 1 if it is a full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_side = 0, r_side = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			l_side = binary_tree_is_full(tree->left);
			r_side = binary_tree_is_full(tree->right);
			if (l_side == 0 || r_side == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
