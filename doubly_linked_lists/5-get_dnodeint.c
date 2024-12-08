#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * *get_dnodeint_at_index- Frees a listint_t list.
 * @head: pointeur
 * @index: entier
 *
 * Return: NULL.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
