#include "binary_trees.h"
/**
 * binary_tree_delete - Recursively free an entire a_tree by releasing each node. 
 * The node will be freed when both its left and right children are NULL.
 * @a_tree: tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *a_tree)
{
	if (a_tree == NULL)
	{
		return;
	}
	else
	{
		if (a_tree != NULL)
		{
			binary_tree_delete(a_tree->left);
			binary_tree_delete(a_tree->right);
		}
		free(a_tree);
	}

}
