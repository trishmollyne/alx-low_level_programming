#iinclude "main.h"
/**
 * print_times_table - when n is greater than 15 or less than 0 dont print
 * @n: how many times
 */
void print_times_table(int n)
{
int w, x, y;
if (n >= 0 && n <= 15)
{
for (w = 0; w <= n; w++)
{
for (x = 0; x <= n; x++)
{
y = x * w;
if (x == 0)
{
_putchar(y + '0');
}
else if (y < 10 && x != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(y + '0');
}
else if (y >= 10 && y < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
else if
(y >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((y / 100) + '0');
_putchar(((y / 10) % 10) + '0');
_putchar((y % 10) + '0');
}
}
_putchar('\n');
}
}
}
