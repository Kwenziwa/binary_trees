#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node to the right of its a_prnt. If the a_prnt 
 * already has a right child, the new node will be placed one level below the 
 * existing right child, becoming the new right child.
 * @a_prnt: parent of the specified node
 * @a_vlu: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *a_prnt, int a_vlu)
{
	binary_tree_t *adv_node;

	if (a_prnt == NULL)
	{
		return (NULL);
	}

	adv_node = binary_tree_node(a_prnt, a_vlu);
	if (adv_node == NULL)
	{
		return (NULL);
	}
	if (a_prnt->right != NULL)
	{
		adv_node->right = a_prnt->right;
		a_prnt->right->a_prnt = adv_node;
	}
	a_prnt->right = adv_node;
	return (adv_node);
}
