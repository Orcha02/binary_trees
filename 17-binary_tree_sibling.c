#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
/* Check parent of sub-tree node with node passed, if equal then is its child*/
	if (node->parent->left == node)
		sibling = node->parent->right; /* Remaining node will be the sibling */
	else
		sibling = node->parent->left;
	return (sibling);
}
