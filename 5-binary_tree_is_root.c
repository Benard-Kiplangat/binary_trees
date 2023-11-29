#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a node is root
 *
 * @node: the pointer to the node to check
 *
 * return: 0 if node is null or not a root and 1 if the node is root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
