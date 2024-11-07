#include "main.h"
#include <stddef.h>  /* Inclure pour NULL */
/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to search
 * @c: Character to locate in the string
 *
 * This function returns a pointer to the first occurrence of the character
 * `c` in the string `s`. If the character is not found, it returns NULL.
 *
 * Return: Pointer to the first occurrence of `c` in `s`, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)  /* Continue until the null terminator is reached */
	{
		if (*s == c)  /* Check if the current character matches `c` */
		{
			return (s);  /* Return a pointer to the current character */
		}
		s++;  /* Move to the next character in the string */
	}
	/* Check for the null terminator */
	if (*s == c)  /* If we reach the null terminator and it matches `c` */
	{
		return (s);  /* Return a pointer to the null terminator if `c` is '\0' */
	}
	return (NULL);  /* Return NULL if `c` was not found in the string */
}
