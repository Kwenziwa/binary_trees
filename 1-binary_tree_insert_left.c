#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node to the left of its a_parent. If the a_parent 
 * already has a left child, the new node will be placed one level below 
 * the existing left child, becoming the new left child.
 * @a_parent: Rephrase the a parent node of the specified node.
 * @a_vlu: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *a_parent, int a_vlu)
{
	binary_tree_t *adv_node;

	if (a_parent == NULL)
	{
		return (NULL);
	}

	adv_node = binary_tree_node(a_parent, a_vlu);
	if (adv_node == NULL)
	{
		return (NULL);
	}
	if (a_parent->left != NULL)
	{
		adv_node->left = a_parent->left;
		a_parent->left->a_parent = adv_node;
	}
	a_parent->left = adv_node;
	return (adv_node);
}
