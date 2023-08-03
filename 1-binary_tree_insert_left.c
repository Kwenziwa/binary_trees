#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node to the left of its parent. If the parent 
 * already has a left child, the new node will be placed one level below 
 * the existing left child, becoming the new left child.
 * @parent: Rephrase the a parent node of the specified node.
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *adv_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	adv_node = binary_tree_node(parent, value);
	if (adv_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		adv_node->left = parent->left;
		parent->left->parent = adv_node;
	}
	parent->left = adv_node;
	return (adv_node);
}
