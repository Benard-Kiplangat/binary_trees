#include "binary_trees.h"

/**
 * binary_tree_size - a function that returns the size of a binary tree
 * @tree: a pointer to the node to find its size
 * Return: the size of the node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? ((binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1)) : 0);
}
