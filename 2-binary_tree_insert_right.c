#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node
 * to the right
 *
 * @parent: pointer to the node to insert the right child in
 * @value: value to be stored in the new node
 * Return: returns a pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;
	return (newnode);
}
