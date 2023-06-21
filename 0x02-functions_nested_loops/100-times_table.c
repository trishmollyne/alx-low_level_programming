#include "main.h"

/**
 * print_times_table - when n is greater than 15 or less than 0 dont print
 * @n: how many times
 */

void print_times_table(int n)
{
	int x, y, result;

	if (n < 0 || n > 15)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			result = x * y;
			if (y == 0)
				printf("%d", result);
			else
				printf(", %d", result);
		}
		printf("\n");
	}
}
