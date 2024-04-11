#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with atleast one child
 * @tree: node to count
 * Return: returns 1 if the tree is not null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t vnode = 0;

	if (tree)
	{
		vnode += (tree->right || tree->left) ? 1 : 0;
		vnode += binary_tree_nodes(tree->right);
		vnode += binary_tree_nodes(tree->left);
	}
	return (vnode);
}
