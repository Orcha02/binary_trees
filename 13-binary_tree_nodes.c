#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: If tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t Nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL) /* Check for child Nodes */
		Nodes++;

	Nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (Nodes);
}
