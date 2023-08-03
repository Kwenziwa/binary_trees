#include "binary_trees.h"
/**
 * binary_tree_preorder - print the elements of a tree by traversing it in pre-order.
 * @a_tre: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *a_tre, void (*func)(int))
{
	if (a_tre == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(a_tre->n);
		binary_tree_preorder(a_tre->left, func);
		binary_tree_preorder(a_tre->right, func);
	}
}
