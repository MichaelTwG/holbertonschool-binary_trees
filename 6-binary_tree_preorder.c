#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * @tree: the binary tree
 * @func: func to print number
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
