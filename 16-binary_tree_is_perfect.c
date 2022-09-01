#include "binary_trees.h"
#include <stdio.h>
/**
 *  binary_tree_height_aux - funcion that measures the height of a binary tree
 *  @tree: the binary tree
 *  Return: depth
 */
size_t binary_tree_height_aux(const binary_tree_t *tree)
{
	int left_depth = 0, right_depth = 0;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_height_aux(tree->left);
	right_depth = binary_tree_height_aux(tree->right);

	if (left_depth > right_depth)
		return (left_depth + 1);

	return (right_depth + 1);
}
/**
 * binary_tree_height - funcion that measures the height of a binary tree
 * @tree: the binary tree
 * Return: depth
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_aux(tree));
}
/**
 * depth - return the depth
 * @tree: the binary tree
 * Return: int
 */
int depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + depth(tree->left) + depth(tree->right));
}
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: is the binary tree
 * Return: return
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int len, l_depth, r_depth;

	len = depth(tree);
	l_depth = binary_tree_height(tree->left);
	r_depth = binary_tree_height(tree->right);

	if (l_depth != r_depth)
		return (0);

	if (((len - 1) % 2) == 0)
		return (1);
	return (0);
}
