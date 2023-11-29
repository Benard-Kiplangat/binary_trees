#include "binary_trees.h"

/**
 * binary_tree_size - a function that determines the size of a binary tree
 * if tree is NULL, return 0
 * @tree: the tree to determine its size
 * return: the size of the tree;
 */

size_t binary_tree_size(binary_tree_t *tree, void (*func)(int))
{
	size_t count = 0;
	if (tree)
	{
		count += binary_tree_size(tree->left);
		count += binary_tree_size(tree->right);
	}
	return (count);
}
