#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the rightchild
 * of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to be inserted in the new node
 * Return: pointer to the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *tmpr = NULL;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->right)
	{
		tmpr = parent->right;
		parent->right = new;
		new->right = tmpr;
		tmpr->parent = new;
	}
	else
		parent->right = new;
	return (new);
}
