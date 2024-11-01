#include "main.h"
#include <stdio.h>

/**
 * rev_string- check the code
 *@s: est un pointeur qui pointe vers une chaine de caractere
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;

	int end = 0;
	int start;

	while (*(s + end) != '\0')
	{
		end++;
	}
	for (start = 0; start < end / 2; start++)
	{
		tmp = *(s + start);
		*(s + start) = *(s + end - start - 1);
		*(s + end - start - 1) = tmp;
	}
}
