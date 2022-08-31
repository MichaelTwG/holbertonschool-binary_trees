#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: is the head of the binary tree
 * @value: is the vlaue of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *sticky;

	sticky = malloc(sizeof(binary_tree_t));

	if (!sticky)
		return (NULL);

	sticky->n = value;
	sticky->left = NULL;
	sticky->right = NULL;
	sticky->parent = parent;

	return (sticky);
}
