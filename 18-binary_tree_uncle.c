#include "binary_trees.h"

/**
 * binary_tree_uncle - method that finds if a a_nd is sibling
 * @a_nd: node to check
 * Return: The uncle a_nd
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *a_nd)
{
	if (a_nd == NULL || a_nd->parent == NULL || a_nd->parent->parent == NULL)
	{
		return (NULL);
	}
	if (a_nd->parent->parent->left == a_nd->parent)
		return (a_nd->parent->parent->right);
	return (a_nd->parent->parent->left);
}
