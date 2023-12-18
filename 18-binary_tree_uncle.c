#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node 
 *         NULL if node is NULL
 *         NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node == node->parent->parent->left->left || node ==
		node->parent->parent->left->right)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
