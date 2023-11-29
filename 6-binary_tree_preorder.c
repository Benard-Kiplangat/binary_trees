#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that traverses an entire binary tree
 * using preorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * return: nothing
 */

void binary_tree_preorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree.n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
