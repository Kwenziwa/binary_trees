#include "binary_trees.h"

/**
 * binary_tree_sibling - method that finds if a a_nd is sibling
 * @a_nd: node to check
 * Return: The sibling a_nd
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *a_nd)
{
	if (a_nd == NULL || a_nd->parent == NULL)
	{
		return (NULL);
	}
	if (a_nd->parent->left == a_nd)
		return (a_nd->parent->right);
	return (a_nd->parent->left);
}
