#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes of a binary tree
 * @tree: a pointer to the root node of the tree to count its nodes
 * Return: nothing
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree && tree->left)
	{
		count++;
		count += binary_tree_nodes(tree->left);
	}
	if (tree && tree->right)
	{
		count++;
		count += binary_tree_nodes(tree->right);
	}
	return (count);
}
