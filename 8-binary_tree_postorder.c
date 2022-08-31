#include "binary_trees.h"
/**
 * binary_tree_postorder - print numbers of tree post order
 * @tree: pointer to root of tree
 * @func: function to print numbers of tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
