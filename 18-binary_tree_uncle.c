#include "binary_trees.h"
binary_tree_t *binary_tree_sibling(binary_tree_t *uncle);

/**
 * binary_tree_uncle - a function that determines if a node is an uncle of atree
 * @node: the node of a tree
 *
 * Return: a pointer to the uncle of a tree or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - a function that checks the sibling of a node
 * node: the node to check
 *
 * Return: the child of a parent node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == NULL || node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
