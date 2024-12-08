#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - ajoute un noeud
 * @h: depart
 * @idx: position
 * @n: noeuddd
 * Return: NULL
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (idx == 0 || (*h) == NULL)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		if ((*h)->next == NULL)
			return (add_dnodeint_end(h, n));
		i++;
		tmp = tmp->next;
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			tmp->next->prev = new;
		}
		return (new);
	}
	return (NULL);
}
