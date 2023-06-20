#include "main.h"

/**
 * print alphabet - prints the alphabet in lowercase followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
	_putchar(p);
	}
	_putchar('\n');
}
