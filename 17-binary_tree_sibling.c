#include "binary_trees.h"
/**
*binary_tree_sibling- finds sibling of a node
*@node: node whose sibling is to be found
*Return: The value of the sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	if (node->parent->right == node && node->parent->left)
		return (node->parent->left);
	else
		return (NULL);
}
