#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node- ajoute un new noeud au dÃ©but de la liste chainÃe
 *@str: pointeur pour le new noeud
 *@head: au de la liste
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
