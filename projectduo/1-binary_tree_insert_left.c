#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left- Cree un nouveau noeud et devient le pere dde l'ancien noeud 
 *@parent: 
 *:@value: valeur du nouveau noeud
 * Return: 0
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}
	
	new_node = binary_tree_node(parent, value);

	if (!new_node)
	{
		return (NULL);
	}


	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	
	parent->left = new_node;

	return (new_node);
}
