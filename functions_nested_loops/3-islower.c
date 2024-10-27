#include "main.h"
#include <stdio.h>

/**
* _islower- check the code.
*
* Return: Always 0.
*/

int _islower(int c)
{
return (c >= 'a' && c <= 'z') ? 1 : 0;
}
void _putchar(char c)
{
putchar(c);
}
int main(void) {
char b[] = {'a', 'b', 'C', 'D', 'E', 'F', 'J', 'H', 'I', 'j', 'K', 'l', 'M', 'n', 'o', 'p', 'Q', 'R', 's', 't', 'U', 'v', 'W', '\0'};
for (int i = 0; b[i] != '\0'; i++)
{
int r = _islower(b[i]);
if (r)
{
_putchar('1');
} else {
_putchar('0');
}
}
_putchar('\n');
return 0;
}
