#include <stdio.h>
/**
 * main - you can only use the putchar function
 * Return: Always 0
 */
int main(void)
{
	char pm;

	for (pm = 'z'; pm >= 'a'; pm--)
		putchar(pm);

	putchar('\n');

	return (0);
}
