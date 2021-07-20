#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t LeafCount = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	LeafCount += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (LeafCount);
}

/* 1. If node is NULL return 0 */
/* 2. If left and right child nodes are NULL return 1 */
/* 3. Else recursively calculate leaf count */
/* 4. LeafCount = LeafCount Left Subtree + LeafCount Right Subtree */
