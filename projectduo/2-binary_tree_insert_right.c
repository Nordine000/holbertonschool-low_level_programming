#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right- insère unnoeud en tant enfant de droite
 *@parent: root (grand pere)
 *@value: valeur que j'integre a mon noeud
 * Return: Always 0 (Success)
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if(!parent)
        {
                return (NULL);
        }

	new_node = binary_tree_node(parent, value);

	if(!new_node)
	{
		return (NULL);
	}


	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	
	parent->right = new_node;

	return (new_node);

}
