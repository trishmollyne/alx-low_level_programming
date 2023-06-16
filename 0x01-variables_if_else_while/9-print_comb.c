#include <stdio.h>

/**
 * main - numbers should be printed in ascending order
 * Return: Always 0
 */
int main(void)
{
	int num;

for (num = 0; num <= 9; num++)
{
putchar(num + '0');
putchar(',');
putchar(' ');
}

for (num = 10; num <= 15; num++)
{
putchar(num - 10 + 'a');
if (num != 15)
{
putchar(',');
putchar(' ');
}
}

	putchar('\n');

	return (0);
}
