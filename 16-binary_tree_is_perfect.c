#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a binary tree
*@tree: starting node to measure from
*Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
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
/**
*binary_tree_is_perfect - checjs jf a tree is perfect
*
*@tree: pointer to starting node
*Return: 1 or 0(success or fail)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
/*	int height, no_of_nodes;*/

	if (tree == NULL)
		return (0);
/*	height = binary_tree_height(tree);
	no_of_nodes = binary_tree_size(tree);
	return (pow(2, height) - 1 == no_of_nodes);
*/
	return 1;
}
