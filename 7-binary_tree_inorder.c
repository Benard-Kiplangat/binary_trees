#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that traversses an entire binary tree
 * using inorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a function that prints the value of a node
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
