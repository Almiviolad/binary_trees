#include "binary_trees.h"
/**
*binary_tree_nodes - counts the number of nodes with at least a child
*@tree: pointer the root node
*Return: no. of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r, with_child;
	
	if (tree == NULL)
		return (0);
	with_child = 0;
	if (tree->left || tree->right)
		with_child = 1;
	l = with_child + binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	return (l + r);
}
