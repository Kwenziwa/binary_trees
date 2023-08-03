#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lzf = 0, k = 0, m = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		k = binary_tree_leaves(tree->left);
		m = binary_tree_leaves(tree->right);
		lzf = k + m;
		return ((!k && !m) ? lzf + 1 : lzf + 0);
	}
}
