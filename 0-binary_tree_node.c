#include "binary_trees.h"
/**
*binary_tree_node - creates a bunary tree nodee
*
*@parent: pointer to parent node of tge node
*@value: valueof the node
*Return: The new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!value)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	return  (new_node);
}
