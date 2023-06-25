#include "main.h"

/**
 * print_sign - i am required to print the sign of the number
 * @n: This is the number that should be checked
 * Return: 1 for any positive number, -1 for negative number,zero or any other
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if
(n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
