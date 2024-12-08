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
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
