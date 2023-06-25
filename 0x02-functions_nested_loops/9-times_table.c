#include "main.h"

/**
 * times_table - required to print 9 times table
 * Return: output is empty
 */

void times_table(void)
{

int w, x, y;

for (w = 0; w < 10; w++)
{
for (x = 0; x < 10; x++)
{
y = x * w;
if (x == 0)
{
_putchar(y + '0');
}
if (y < 10 && x != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(y + '0');
}
else if (y >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
}
_putchar('\n');
}
}
