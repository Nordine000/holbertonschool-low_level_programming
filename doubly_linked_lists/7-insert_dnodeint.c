#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_dnodeint_at_index- Entry Point
 * @head: head
 * @index: index
 *
 *
 *
 *
 *
 * Return: head
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *current;

	if (h == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new; 
			*h = new; 
			return (new);
		}
		current = *h;

		while (current != NULL && count < idx)
		{
			current = current->next;
			count++;
		}
		if (current == NULL && count == idx)
		{
			free(new); return (NULL);
		}

		new->next = current;
		new->prev = current->prev;

		if (current->prev != NULL)
		{
			current->prev->next = new;
			current->prev = new;
		}
		return (new);
	}

	free(new);
	return (NULL);
}
