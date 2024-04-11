#include "binary_trees.h"
/**
 * binary_tree_leaves - checks leaves of a node
 * @tree: node to check
 * Return: returns the number of leaves belonging to a node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->right && !tree->left) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
