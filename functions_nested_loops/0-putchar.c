#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(char c)
{
	char e[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};

	for (int s = 0; e[s] != '\0'; s++)
	{
	putchar(e[s]);
	}
	putchar('\n');
	return (write(1, &c, 1));
}
