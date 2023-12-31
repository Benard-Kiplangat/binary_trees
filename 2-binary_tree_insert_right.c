#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts the right node
 * of another node if parent has a right-child, the new node must take its
 * place and set the old node to the new node's right child
 *
 * @parent: the parent node to insert a right node
 * @value: the node value to store in the new node
 *
 * Return: the pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_new_node;
	
	if (parent == NULL)
	{
		return (NULL);
	}

	bt_new_node = binary_tree_node(parent, value);

	if (bt_new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		bt_new_node->right = parent->right;
		parent->right->parent = bt_new_node;
	}
	parent->right = bt_new_node;

	return (bt_new_node);
}
