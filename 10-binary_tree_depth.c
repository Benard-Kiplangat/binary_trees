#include "binary_trees.h"

/**
 * binary_tree_depth - a function to measure the depth of a binary tree
 *
 * @tree: the pointer to the root node of the tree node to measure its depth
 * Return: 0 or depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? binary_tree_depth(tree->parent) + 1 : 0);
}
