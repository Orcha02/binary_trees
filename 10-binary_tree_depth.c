#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth.
 * Return: If tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

/* Find number of ancestor of node (connections from node to root) */