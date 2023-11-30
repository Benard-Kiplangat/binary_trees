#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that traverses an entire binary tree
 * using inorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * return: nothing
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count++;
		count += binary_tree_size(tree->left);
		count += binary_tree_size(tree->right);
	}
	return (count);
}
