#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree
 * node
 * @parent: pointer to the parent node of the node to create
 * @value: Value to put i the new node
 * Return: returns pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;
	return (newnode);
}
