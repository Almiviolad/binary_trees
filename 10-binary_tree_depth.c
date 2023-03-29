#include "binary_trees.h"
/**
*binary_tree_depth - measures the depth of a binary tree
*@tree: node to measure from
*Return: the depth of the tree or 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
