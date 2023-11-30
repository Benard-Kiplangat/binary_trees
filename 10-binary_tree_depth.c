#include "binary_trees.h"

/**
 * binary_tree_depth - a function to measure the depth of a binary tree
 *
 * @tree: the pointer to the root node of the tree node to measure its depth
 * return: 0 or depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree && tree->parent)
		count += binary_tree_depth(tree->parent) + 1;
	return (count);
}
