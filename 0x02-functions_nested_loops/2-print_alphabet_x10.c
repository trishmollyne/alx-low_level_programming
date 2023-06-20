#include "main.h"

/**
 * 2-print_alphabet_x10 - you can only use putchar twice in your code
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char p;

	while (i <= 9)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
