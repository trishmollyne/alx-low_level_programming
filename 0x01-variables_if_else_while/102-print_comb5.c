#include <stdio.h>

/**
 * main - all your code should be in the main function
 * Return: Always 0
 */
int main(void)
{
		int e, f;

	for (e = 0; e <= 99; e++)
	{
		for (f = e + 1 ; f <= 99; f++)
		{
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');
			putchar(' ');
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');

			if (e != 98 || f != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
