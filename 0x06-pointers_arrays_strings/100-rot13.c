#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)

{
int p;
int m;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (p = 0; s[p] != '\0'; p++)
{
for (m = 0; m < 52; m++)
{
if (s[p] == data1[m])
{
s[p] = datarot[m];
break;
}
}
}
return (s);
}
