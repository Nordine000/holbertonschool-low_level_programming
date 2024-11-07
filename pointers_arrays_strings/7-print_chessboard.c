#include "main.h"

/**
 * print_chessboard- echec et mat
 *@a:tableau
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int o, p;

	for (o = 0; o < 8; o++)
	{
		for (p = 0; p < 8; p++)
		{
			_putchar(a[o][p]);
		}
	}
}
