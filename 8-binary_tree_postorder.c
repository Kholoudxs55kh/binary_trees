#include "binary_trees.h"

/**
 * binary_tree_postorder - go through binarytree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to func to call each node. The value in node must be passed
 * Return: Void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((!tree) || (!func))
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
