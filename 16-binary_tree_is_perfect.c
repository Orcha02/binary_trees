#include "binary_trees.h"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - Function that checks if a tree is perfect
 * @tree: pointer to the root
 * Return: 1 if true or 0 if false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	return (0);
}
