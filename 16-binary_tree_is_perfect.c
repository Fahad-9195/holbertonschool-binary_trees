#include "binary_trees.h"

/**
 * depth_leftmost - Computes depth (in edges) of leftmost leaf
 * @tree: Pointer to root
 *
 * Return: Depth of the leftmost path, 0 if tree is NULL
 */
static size_t depth_leftmost(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	while (tree->left)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect_rec - Checks perfectness against expected leaf depth
 * @tree: Pointer to current node
 * @depth: Expected leaf depth (in edges)
 * @level: Current level (in edges from root)
 *
 * Return: 1 if perfect, else 0
 */
static int is_perfect_rec(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);

	/* Leaf: must be at the expected depth */
	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);

	/* Internal node: must have two children */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_rec(tree->left, depth, level + 1) &&
		is_perfect_rec(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d;

	if (tree == NULL)
		return (0);

	d = depth_leftmost(tree);
	return (is_perfect_rec(tree, d, 0));
}
