#include "binary_trees.h"
/**
 * binary_tree_node - Function creates a binary tree node
 * @parent: Pointer to the parent node of node to create
 * @value: Value given to new node
 * Return: Pointer to new node, or NULL if fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;

	return (n_node);
}
