#include "binary_trees.h"
/**
*binary_tree_postorder - Goesthrough a binary tree usng inorder method
*
*@tree: pointer to the root node
*@func: function to be performed on each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
