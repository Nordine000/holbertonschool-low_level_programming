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

	list_t *ajoute;
	ajoute = malloc(sizeof(list_t));

	if (ajoute == NULL)
	{
		return (NULL);
	}
	ajoute->str = strdup(str);

	if (ajoute->str == NULL)
	{
	free(ajoute);
	return (NULL);
	}

	ajoute->len = strlen(str);
	ajoute->next = *head;

	*head = ajoute;

	return (ajoute);
}
