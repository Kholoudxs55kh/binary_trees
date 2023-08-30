#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *RightNode;

	if (!parent)
		return (NULL);

	RightNode = binary_tree_node(parent, value);

	if (!RightNode)
		return (NULL);

	if (parent->right)
	{
		RightNode->right = parent->right;
		parent->right->parent = RightNode;
	}

	parent->right = RightNode;

	return (RightNode);
}
