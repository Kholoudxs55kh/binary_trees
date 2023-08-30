#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *LeftNode;

    if (!parent)
		return (NULL);

	LeftNode = binary_tree_node(parent, value);

    if (!LeftNode)
		return (NULL);

	if (parent->left)
	{
		LeftNode->left = parent->left;
		parent->left->parent = LeftNode;
	}

	parent->left = LeftNode;

    return (LeftNode);
}