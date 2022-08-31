#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the left-child
 * @parent: is the parent of the new node
 * @value: the value of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *sticky;

	if (!parent)
		return (NULL);

	sticky = malloc(sizeof(binary_tree_t));

	if (!sticky)
		return (NULL);

	sticky->n = value;
	sticky->left = NULL;
	sticky->right = NULL;

	if (parent->left)
	{
		sticky->left = parent->left;
		parent->left->parent = sticky;
	}
	parent->left = sticky;
	sticky->parent = parent;
	return (sticky);
}
