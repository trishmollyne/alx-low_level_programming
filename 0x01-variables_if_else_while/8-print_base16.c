#include <stdio.h>

/**
 * main - all your code should be in the main function
 * Return: Always 0
 */
int main(void)
{
	char num;
	char pm;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (pm = 'a'; pm <= 'f'; pm++)
		putchar(pm);

	putchar('\n');

	return (0);
}
