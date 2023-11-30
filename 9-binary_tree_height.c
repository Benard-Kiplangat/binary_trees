#include "binary_trees.h"

/**
 * binary_tree_height - a function to measure the height of a binary tree
 *
 * @tree: the pointer to the root node of the tree to measure its height
 * return: 0 or height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (tree)
	{
		count_l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		count_r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		return ((count_l > count_r) ? count_l : count_r);
	}
	return (0);
}
