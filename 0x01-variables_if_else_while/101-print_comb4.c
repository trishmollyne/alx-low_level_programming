#include <stdio.h>
/**
 * main - numbers should be printed in ascending order, with three digits
 * Result: Always 0
 */
int main(void)
{
		int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = y + 1; y <= 8; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}