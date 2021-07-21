#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that  checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: If tree is NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_child = 0, right_child = 0;

	if (tree == NULL)
		return (0);
/* Check if node is a leaf node */
	if (tree->right == NULL && tree->left == NULL)
		return (1);
/* Check if node has only one child */
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		left_child = binary_tree_is_full(tree->left);
		right_child = binary_tree_is_full(tree->right);
		if ((left_child == 1) && (right_child == 1))
			return (1);
	}
	return (0);
}

