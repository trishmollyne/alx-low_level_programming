#include "main.h"

/**
 * print_line - function that draws straight line,line should end with \n
 * @n: times the character can be printed
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
