#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_is_leaf- check if node is a leaf
 *@node: which allows to browse is to check if the node is a leaf
 *Return: Always 0 (Success)*/


int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node->left)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	if (!node->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
