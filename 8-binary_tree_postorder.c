#include "binary_trees.h"
/**
 * binary_tree_preorder - print the elements of a tree by traversing it in pre-order.
 * @a_tre: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *a_tre, void (*func)(int))
{
	if (a_tre == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(a_tre->left, func);
		binary_tree_postorder(a_tre->right, func);
	}
	func(a_tre->n);
}
