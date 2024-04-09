#include "binary_trees.h"
/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) && (binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *@tree: is a pointer to the root node of the tree to check
 *Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
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
