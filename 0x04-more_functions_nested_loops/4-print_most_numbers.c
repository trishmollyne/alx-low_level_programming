#include "main.h"

/**
 * print_most_numbers - write a function that print 0 to 9,dont print 2 and 4
 * Return: Always 0.
 */

void print_most_numbers(void)
{

int c;

for (c = 48; c < 58; c++)
{
if (c != 50)
{
if (c != 52)
{
_putchar(c);
}
}
}
_putchar('\n');
}
