#include "main.h"
/**
*_puts - print a strings
*@str: print an char
*
* Return: Always 0.
*/

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
