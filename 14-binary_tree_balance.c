#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a binary tree
*@tree: starting node to measure from
*Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);
	height_l = 1 + binary_tree_height(tree->left);
	height_r = 1 + binary_tree_height(tree->right);
	return (height_l > height_r ? height_l : height_r);
}
/**
*binary_tree_balance - finds the balance factor of a binary tree
*@tree: pointer to the root node to start measurement from
*Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
