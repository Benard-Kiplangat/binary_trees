#include "binary_trees.h"

/**
 * binary_tree_post_order - a function that goes through a binary tree
 * using post-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * return: nothing;
 */

void binary_tree_postorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree.n);
	}
}
