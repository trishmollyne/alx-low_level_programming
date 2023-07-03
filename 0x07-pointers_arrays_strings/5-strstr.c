#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *r = haystack;
char *s = needle;

while (*r == *s && *s != '\0')
{
r++;
s++;
}

if (*s == '\0')
return (haystack);
}
return (0);
}
