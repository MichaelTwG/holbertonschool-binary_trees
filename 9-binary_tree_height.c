#include "binary_trees.h"
/**
 *  binary_tree_height_aux - funcion that measures the height of a binary tree
 *  @tree: the binary tree
 *  Return: depth
 */
size_t binary_tree_height_aux(const binary_tree_t *tree)
{
	int left_depth = 0, right_depth = 0;

	if (tree == NULL)
		return (-1);

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
