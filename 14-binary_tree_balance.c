#include "binary_trees.h"
/**
*binary_tree_balance - finds the balance factor of a binary tree
*@tree: pointer to the root node to start measurement from
*Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
