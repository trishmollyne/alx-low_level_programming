#include <stdio.h>
/**
 * main - you can only use putchar three times in your code
 * Return: Always 0
 */
int main(void)
{
	char ef;

	for (ef = 'a'; ef <= 'z'; ef++)
	{
		putchar(ef);
	}
	for (ef = 'A'; ef <= 'Z'; ef++)
	{
		putchar(ef);
	}
	putchar('\n');
	return (0);
}
