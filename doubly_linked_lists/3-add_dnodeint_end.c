#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



/**
 * add_dnodeint_end - Ajoute un nouveau noeud a la fin
 * @head: Pointeur vers le pointeur
 *@n: valeur inserer
 *
 *
 *
 *
 * Return: Adresse ou NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *position;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	position = *head;
	while (position != NULL && position->next != NULL)
		position = position->next;

	position->next = new_node;
	new_node->prev = position;

	return (new_node);
}
