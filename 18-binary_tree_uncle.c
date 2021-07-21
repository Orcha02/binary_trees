#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Is a  pointer to the node to find the uncle
 * Return: Pointer to uncle node, if node is NULL or has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent)); /* Sibling of parent = Uncle */
}
