#include "binary_trees.h"

/**
 * binary_tree_leaves - counts how many leaves are in the tree
 * @tree: The tree to be evaluated
 * Return: The addition of both sides of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}