#include "binary_trees.h"

/**
 * binary_tree_balance - a function to check the balance of a binary tree
 *
 * @tree: the pointer to the root node of the tree to check its balance
 * return: the balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int cntl = 0, cntr = 0;

	if (tree && tree->left)
		cntl = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	if (tree && tree->right)
		cntr = tree->right ? binary_tree_balance(tree->right) + 1 : 0;
	return ((cntl < cntr) ? cntl - cntr : cntr - cntl);
}
