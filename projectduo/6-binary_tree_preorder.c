#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder- goes through a binary tree using pre-order traversal and print
 * @tree: value transmitted to func
 * @func: call function
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}

	if (!func)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
