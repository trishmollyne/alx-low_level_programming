#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converting a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number,or 0 if there are non-binary chars or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int base = 1;
int index = 0;
if (b == NULL)
return (0);
while (b[index] != '\0')
{
if (b[index] != '0' && b[index] != '1')
return (0);
index++;
}
index--;
while (index >= 0)
{
result += (b[index] - '0') * base;
base *= 2;
index--;
}
return (result);
}
