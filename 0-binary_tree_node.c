#include "binary_trees.h"

/**
 * binary_tree_node - initiate a binary node
 * @parent: Node of a parent
 * @value: Value of the node
 * Return: the initieted node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *adv_node;

	adv_node = malloc(sizeof(binary_tree_t));
	if (adv_node == NULL)
	{
		return (NULL);
	}
	adv_node->n = value;
	adv_node->parent = parent;
	adv_node->left = NULL;
	adv_node->right = NULL;
	return (adv_node);
}
