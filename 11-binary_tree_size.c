#include "binary_trees.h"
/**
*binary_tree_size - finds size of a binary tree
*@tree: starting node
*Return: obvious right(the size) and 0 if fails
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize, rsize;

	if (!tree)
		return (0);
	lsize = 1 + binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);
	return (lsize + rsize);
}
