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
	const binary_tree_t *fn, *sn;

	if (!first || !second)
		return (NULL);

	fn = first;
	if (second == first)
		return ((binary_tree_t *)first);

	while (fn)
	{
		sn = second;
		while (sn)
		{
			if (sn == fn)
				return ((binary_tree_t *)fn);
			sn = sn->parent; /*Goes up until meeting lowest common ancestor */
		}
		fn = fn->parent; /*Goes up until meeting lowest common ancestor */
	}
	return (NULL);

}

/* (!first) same as (first == NULL) */
