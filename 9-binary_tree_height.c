#include "binary_trees.h"
/**
 *binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height.
 *Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lh += 1 + binary_tree_height(tree->left);
	if (tree->right)
		rh += 1 + binary_tree_height(tree->right);

	if (lh > rh)
		return (lh);
	else
		return (rh);
}
