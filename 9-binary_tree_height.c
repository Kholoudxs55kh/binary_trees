#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t HLeft;
	size_t HRight;

	if (!tree)
		return (0);

	else
	{
		if (tree)
		{
			HLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			HRight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return (HLeft > HRight ? HLeft : HRight);
	}
}
