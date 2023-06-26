#include "main.h"

/**
 * _puts - Prints a string to standout
 * @str: The string to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
