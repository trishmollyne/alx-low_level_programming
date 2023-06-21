#include "main.h"

/**
 * times_table - required to print 9 times table
 * Return: output is empty
 */

void times_table(void)
{
	int p, m, result;

	for (p = 0; p <= 9; p++)
	{
		for (m = 0; m <= 9; m++)
		{
			result = p * m;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');

			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
