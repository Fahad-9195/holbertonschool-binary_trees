#include "binary_trees.h"

/* Local helper that measures height in LEVELS (leaf = 1) */
static size_t height_levels(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = height_levels(tree->left);
	rh = height_levels(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor (left height - right height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)height_levels(tree->left) -
		(int)height_levels(tree->right));
}
