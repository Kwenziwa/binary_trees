#include "binary_trees.h"
/**
 * binary_tree_nodes - function that returns # of nodes in a etr with children
 * @etr: tree to check
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *etr)
{

	size_t  a_node = 0;

	if (etr == NULL)
	{
		return (0);
	}
	else
	{
		a_node += ((etr->left || etr->right) ? 1 : 0);
		a_node += binary_tree_nodes(etr->left);
		a_node += binary_tree_nodes(etr->right);
		return (a_node);
	}
}
