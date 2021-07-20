#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts node as right-child of another node
 * @parent: Pointer to the parent node of node to create
 * @value: Value given to new node
 * Return: Pointer to the created node, or NULL if fails or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = n_node;
		return (n_node);
	}
	else
	{
		parent->right->parent = n_node; /* Root */
		n_node->right = parent->right; /* Right sub-tree */
		parent->right = n_node; /* Right sub-tree parent = New node */
		return (n_node);
	}
}
