#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 0;
	while (c <= '9' - '0')
	{
		putchar(c + '0');
		c++;
	}
	putchar ('\n');
		return (0);
}
