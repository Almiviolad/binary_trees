#include "binary_trees.h"
/**
*binary_tree_insert_left-  inserts a node ro the left child of the parent
*
*@parent: pointer to parent node of tge node
*@value: valueof the node
*Return: The inserted node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL || !value)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
		parent->left = new_node;
	return (new_node);
}

