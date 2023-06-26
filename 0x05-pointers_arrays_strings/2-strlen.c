#include <stdio.h>

/**
 * _strlen - Write a function that returns the length of a string
 * @str: the exact string that we should get the length of
 * Return: length of @str
 */
int _strlen(char *str)

{
	int length = 0;

while (*str++)
length++;
return (length);
}
