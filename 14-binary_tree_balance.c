#include "binary_trees.h"
/**
 *binary_tree_balance - function that measures the balance factor
 *@tree: is a pointer to the root node of the tree to measure the balance
 *Return: 0 if free is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
	{
		return (0);
	}
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}
/**
 *binary_tree_height - Measure the height of binary tree
 *@tree: A point to the root node of the tree to mesaure the height
 *Return: return 0 if tree is NULL else retuen height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ls = 0;
	size_t rs = 0;

	if (!tree)
		return (0);

	ls += 1 + binary_tree_height(tree->left);
	rs += 1 + binary_tree_height(tree->right);
	if (ls > rs)
		return (ls);

	return (rs);
}
