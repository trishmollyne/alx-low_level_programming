#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)

{
int p, m;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (p = 0; n[p] != '\0'; p++)
{
for (m = 0; m < 10; m++)
{
if (n[p] == s1[m])
{
n[p] = s2[m];
}
}
}
return (n);
}
