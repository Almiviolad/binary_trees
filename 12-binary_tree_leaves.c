#include "binary_trees.h"
/**
*binary_tree_leaves - counts the leaves in a binary tree
*@tree: ppointer to the roort
*Return: No. of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r, leave;

	if (tree == NULL)
		return (0);
	leave = 0;
	if (!tree->left && !tree->right)
		leave = 1;
	l = leave + binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (l + r);
}
