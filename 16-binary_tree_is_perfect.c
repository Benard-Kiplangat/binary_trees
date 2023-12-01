#include "binary_trees.h"
#include <stdio.h>

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the node to find if it's perfect
 * Return: 1 if perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

/**
 * is_leaf - a function that checks if a node is a leaf of a binary tree
 *
 * @node: the pointer to the to the node to check
 *
 * Return: 1 if the node is leaf or 0 if not
 */

unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - a function that checks the depth of a node in a binary tree
 *
 * @tree: a  pointer to the node to check its depth
 *
 * Return: the depth of node
 */

size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - a function that returns a leaf of a binary tree
 *
 * @tree: the pointer to the root node of the tree
 *
 * Return: the pointer to the first encountered leaf
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);

	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - a function that checks if a binary tree is
 * perfect binary tree through recursion
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * @leaf_depth: the depth of one leaf in the binary tree
 *
 * @level: tjhe level of current node
 *
 * Return: 1 if the binary tree is perfect or 0 if not
 */

int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}
