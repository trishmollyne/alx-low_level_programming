#include <stdio.h>

/**
 * main - you can only use putchar twice in your code
 * Return: Always 0
 */
int main(void)
{
	char xy;

		for (xy = 'a'; xy <= 'z'; xy++)
		{
			if (xy != 'e' && xy != 'q')
			putchar(xy);
		}

	putchar('\n');

	return (0);
}
