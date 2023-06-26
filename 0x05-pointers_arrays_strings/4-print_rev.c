#include "main.h"
#include <stdio.h>

/**
 * print_rev - string to be printed in reverse
 * @s: The string that needs to be printed in reverse
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
