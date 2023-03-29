#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a binary tree
*@tree: starting node to measure from
*Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = 0;
	while (tree->left || tree->right)
	{
		if (tree->left)
		{
			binary_tree_height(tree->left);
			tree = tree->left;
		}
		else if (tree->right)
		{
			binary_tree_height(tree->right);
			tree = tree->right;
		}
		height++;
	}
	return (height);
}
