#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint- imprime
 * @h: compte
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t prime = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		prime++;
	}
	return (prime);
}
