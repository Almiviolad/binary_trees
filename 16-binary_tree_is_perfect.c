#include "binary_trees.h"
/**
*binary_tree_is_perfect - checjs jf a tree is perfect
*
*@tree: pointer to starting node
*Return: 1 or 0(success or fail)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, no_of_nodes;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	printf("%d", height);
	no_of_nodes = binary_tree_size(tree);
	printf("%d", no_of_nodes);
	return (pow(2, height) - 1 == no_of_nodes);
}
