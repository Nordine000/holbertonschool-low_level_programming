#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>




/**
 * free_dlistint - list
 * @head: pointeur
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
