#include "binary_trees.h"
/**
 * is_full - check if a binary tree is full
 * @tree: is the binary tree
 * Return: is tree is null return 0
 */
int is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((!tree->left && !tree->right))
		return (1);
	if ((tree->left) && (tree->right))
	{
		return ((is_full(tree->left)) && (is_full(tree->right)));
	}
	return (0);
}
/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: is the binary tree
 * Return: is tree is null return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full(tree));
}
