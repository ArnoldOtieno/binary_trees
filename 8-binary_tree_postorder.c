#include "binary_trees.h"
/**
 * binary_tree_postorder - list binary tree in postorder method
 * @tree: pointer to the binary to list
 * @func: pointer to the function to print value of node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
