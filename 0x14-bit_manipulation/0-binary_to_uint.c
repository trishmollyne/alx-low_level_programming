#include "main.h"

/*
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to the binary string containing '0' and '1' characters
 * Return: The converted unsigned int number, or 0 for an invalid character
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int s;
if (!b)
return (0);
for (s = 0; b[s]; s++)
{
if (b[s] < '0' || b[s] > '1')
return (0);
result = 2 * result + (b[s] - '0');
}
return (result);
}
