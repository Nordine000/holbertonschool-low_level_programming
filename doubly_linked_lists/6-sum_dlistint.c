#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * sum_dlistint - Entry Point
 * @head: head
 *
 *
 *
 * Return: noeud
 */




int sum_dlistint(dlistint_t *head)
{
	int node = 0;

	dlistint_t *new = head;

	while (new != NULL)
	{
		node += new->n;
		new = new->next;
	}
	return (node);
}
