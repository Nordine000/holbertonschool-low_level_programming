#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder- prints value from bottom left upwards
 *@tree: noeud racine
 *@func: nimber prints
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}

	if (!func)
	{
		return;
	}
	
	
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
