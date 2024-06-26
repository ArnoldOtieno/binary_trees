#include "binary_trees.h"
/**
 * binary_tree_inorder - function that lists binary
 * tree in inorder method
 *
 * @tree: pointer to the binary tree to list
 * @func: function pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
