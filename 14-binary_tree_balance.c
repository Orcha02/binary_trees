#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance_factor = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left_height = -1;
	else
		left_height = binary_tree_height(tree->left);

	if (tree->right == NULL)
		right_height = -1;
	else
		right_height = binary_tree_height(tree->right);
	balance_factor = left_height - right_height;
	return (balance_factor);
}
