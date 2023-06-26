#include "main.h"

/**
 * _strcpy - A string to be copied
 * @dest: The destination buffer
 * @src: The source string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

int i = 0;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
