#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if a node is a leaf, that means that the node
 * does not have any child neither left nor right
 * @a_nd: node to study
 * Return: 1 if it is a leaf or 0 if it is not
 */
int binary_tree_is_leaf(const binary_tree_t *a_nd)
{
	if (a_nd == NULL)
		return (0);
	if (a_nd->left == NULL && a_nd->right == NULL)
		return (1);
	return (0);
}
