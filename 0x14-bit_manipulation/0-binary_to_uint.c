#include "main.h"

/*
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to the binary string containing '0' and '1' characters
 * Return: The converted unsigned int number, or 0 for an invalid character
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
{
return (0);
}
unsigned int result = 0;
while (*b != '\0')
{
if (*b != '0' && *b != '1')
{
return (0);
}
result = result << 1;
result += (*b - '0');
b++;
}
return (result);
}
/*
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
const char *binary_str = "110101";
unsigned int result = binary_to_uint(binary_str);
assert(result == 53);
return (0);
}
