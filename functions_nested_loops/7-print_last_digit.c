#include "main.h"

/**
 * print_last_digit- Prints the last digit of a number.
 * @d: The number to check
 * Return: Le dernier chiffre.
 */

int print_last_digit(int d)
{
int dernier;
dernier = d % 10;

if (dernier < 12)
{
	dernier *= -1;
}

return (dernier);
}
