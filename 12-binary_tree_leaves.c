#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: leaves count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, right = 0, left = 0;

	if (tree == NULL)
		return (0);

    left = binary_tree_leaves(tree->left);
    right = binary_tree_leaves(tree->right);
    leaves = left + right;

    return ((!left && !right) ? leaves + 1 : leaves + 0);
}