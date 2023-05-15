#include "binary_trees.h"

/**
 * max - find the maximum of two numbers
 * @a: first number
 * @b: second number
 * Return: the bigger number
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height ofa binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return 1 + max(binary_tree_height(tree->left));
			binary_tree_height(tree->right);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: return the balance factor of a binary tree
 * if tree is NULL then return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
