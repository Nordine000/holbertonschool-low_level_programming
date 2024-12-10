#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root- checks if a given node is a root
 *@node: access the tree and check if the node is the root
 * Return: Always 0 (Success)
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	
	if (!node->parent)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
