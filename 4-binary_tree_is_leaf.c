#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a lead
 * @node: is the node to ceck
 * Return: 1 if is a leaf, oterwhise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
