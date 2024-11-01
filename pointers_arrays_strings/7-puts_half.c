#include "main.h"

/**
 * puts_half- check the code
 *@str: pointeur
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
		j++;
	}

	if (j % 2 == 0)
	{
		i = j / 2;
}
	else
{
	(i = (j + 1) / 2);
}
		while
			(str[i] != '\0')
			{
				_putchar(str[i]);
				i++;
			}
	_putchar('\n');
}
