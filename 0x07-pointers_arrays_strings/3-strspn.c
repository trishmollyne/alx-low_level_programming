#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int e;

while (*s)
{
for (e = 0; accept[e]; e++)
{
if (*s == accept[e])
{
n++;
break;
}
else if (accept[e + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
