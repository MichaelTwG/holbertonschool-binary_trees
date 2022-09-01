#include "binary_trees.h"
/**
 * binary_tree_is_full_aux - check if a binary tree is full
 * @tree: is the binary tree
 * Return: is tree is null return 0
 */
int binary_tree_is_full_aux(const binary_tree_t *tree)
{
	if ((tree->left == NULL && tree->right == NULL))
		return (1);
	if ((tree->left) && (tree->right))
	{
		return (binary_tree_is_full(tree->left));
		return (binary_tree_is_full(tree->right));
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
	return (binary_tree_is_full_aux(tree));
}
