#include "binary_trees.h"
#include <stdio.h>
#include "15-binary_tree_is_full.c"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: is the binary tree
 * Return: return
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree) == 1)
	{
		if ((binary_tree_size(tree->left) - binary_tree_size(tree->right)) == 0)
			return (1);
	}
	return (0);
}
