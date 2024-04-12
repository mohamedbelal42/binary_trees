#include "binary_trees.h"

/**
 * bst_search - searches for a value in bst
 * @tree: pointer to the root node
 * @value: the value to search
 * Return: NULL if the tree is NULL or value not found,
 * otherwise pointer to the node
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
