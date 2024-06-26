#include "binary_trees.h"
/**
 *binary_tree_is_root - function that checks if a node is a root
 *@node: is a pointer to the node to check
 *Return: 1 or if node is a leaf, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->parent == NULL);
}
