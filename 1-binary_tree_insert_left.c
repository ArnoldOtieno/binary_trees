#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the
 * left-child of another node
 *
 * @parent: a node to insert left node to
 * @value: value to be stored in the new node
 * Return: returns a pointer to newly inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
