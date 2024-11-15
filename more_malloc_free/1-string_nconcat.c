#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat- njk
 *@s1: nnbh
 *@s2: hbjbh
 *@n: ghg
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (ls1 = 0; s1[ls1] != '\0'; ls1++);
	for (ls2 = 0; s2[ls2] != '\0'; ls2++);

	if (n > ls2)
	{
		n = ls2;
	}
	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == 0)
	{
		return (0);
	}
	for (i = 0; i < lsout; i++)
	{
		if (i < ls1)
		{
			sout[i] = s1[i];
		}
		else
		{
			sout[i] = s2[i - ls1];
		}
	sout[i] = '\0';
}
