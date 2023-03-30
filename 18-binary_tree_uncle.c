#include "binary_trees.h"
/**
*binary_tree_uncle - checks the uncle if a node
*@node: node to be checked
*Return: The uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (binary_tree_sibling(node->parent));
}
