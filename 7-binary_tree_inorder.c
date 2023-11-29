#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that traverses an entire binary tree
 * using inorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * return: nothing
 */

void binary_tree_inorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree.n);
		binary_tree_inorder(tree->right, func);
	}
}
