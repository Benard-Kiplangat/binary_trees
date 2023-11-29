#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: the parent node or root
 * @value: the node value to add
 *
 * return: the pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_new_node = malloc(sizeof(binary_tree_t));

	if (bt_new_node == NULL)
		return (NULL);

	bt_new_node->parent = parent;
	bt_new_node->n = value;

	return (bt_new_node);
}
