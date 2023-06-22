#include "main.h"

/**
 * print_diagonal - A function that draws diagonal line that end with a \n
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int k, l;
for (k = 0; k < n; k++)
{
for (l = 0; l < n; l++)
{
if (k == l)
_putchar('\\');
else if (k < l)
_putchar(' ');
}
_putchar('\n');
}
}
}
