#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that check if a node is a root
 * @node: a pointer to the node to check
 * Return: 1 if a node is a root otherwise 0, if node is null return null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
