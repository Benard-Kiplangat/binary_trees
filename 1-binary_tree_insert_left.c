#include "binary_trees.h"

/**
 * binary_tree_insert-left - a function that inserts the left node
 * of another node if parent has a left-child, the new node must take its
 * place and set the old node to the new node's left child
 *
 * @parent: the parent node to insert a left node
 * @value: the node value to store in the new node
 *
 * return: the pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_new_node = binary_tree_node(parent, value);

	if (parent == NULL || bt_new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		bt_new_node->left = parent->left;
		parent->left->parent = bt_new_node;
	}
	parent->left = bt_new_node;

	return (bt_new_node);
}
