#include "binary_trees.h"
/**
 *binary_tree_nodes - function that counts the nodes with at least 1 child
 *@tree: A  pointer to the root node of the tree to count number of nodes
 *Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
