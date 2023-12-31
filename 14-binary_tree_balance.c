#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the balance factor or
 *         0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->left && tree->right
		? binary_tree_height(tree->left) -
		 binary_tree_height(tree->right)
		: tree->left
		? binary_tree_height(tree)
		: -binary_tree_height(tree));
}

