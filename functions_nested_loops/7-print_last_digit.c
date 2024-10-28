#include "main.h"

/**
 * print_last_digit- Prints the last digit of a number.
 * @dernier: The number to check
 * Return: Always 0.
 */

int print_last_digit(int dernier)
{
int last = dernier % 10;

if (last < 0)
last *= -1;
_putchar('0' + last);
return (0);
}
