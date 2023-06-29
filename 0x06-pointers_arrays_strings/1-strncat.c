#include "main.h"

/**
 * _strncat - A function that concentrate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{

int w;

int x;

w = 0;
while (dest[w] != '\0')
{
w++;
}
x = 0;
while (x < n && src[x] != '\0')
{
dest[w] = src[x];
w++;
x++;
}
dest[w] = '\0';
return (dest);
}
