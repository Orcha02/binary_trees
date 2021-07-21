#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds lowest common ancestor of 2 nodes
 * @first: Pointer to first node
 * @second: Pointer to second node
 * Return: Lowest common ancestor, if not found return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if ((!first || !second) && (!first->parent && !second->parent))
		return (NULL);

	if (first->parent == second || first->parent == NULL)
		return (first->parent);

	if (second->parent == first || second->parent == NULL)
		return (second->parent);

	if (first->parent == second->parent)
		return (first->parent);

	if (binary_trees_ancestor(first->parent, second) != NULL)
		return (binary_trees_ancestor(first->parent, second->parent));/*First Node*/
	return (binary_trees_ancestor(first->parent, second->parent));/*Second Node*/
}

/* (!first) same as (first == NULL) */
