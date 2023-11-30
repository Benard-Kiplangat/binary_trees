#include "binary_trees.h"

/**
 * binary_tree_height - a function to measure the height of a binary tree
 *
 * @tree: the pointer to the root node of the tree to measure its height
 * return: 0 or height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree->right)
			count += binary_tree_height(tree->right) + 1;
	}

	return (count);
}
