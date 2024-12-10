#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete- Supprime l'arbre a partir du dernier noeud
 *@tree: est mon pointeur sur mon arbre
 * Return: Always 0 (Success)
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);	

}
