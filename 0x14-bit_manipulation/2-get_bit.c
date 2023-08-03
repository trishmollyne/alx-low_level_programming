#include "main.h"
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary representation.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
if (n <= 1)
return;
if ((n & (n - 1)) == 0)
_putchar('\n');
}
int main(void)
{
unsigned long int number1 = 1;
unsigned long int number2 = 3;
unsigned long int number3 = 4;
print_binary(number1);
_putchar('\n');
print_binary(number2);
_putchar('\n');
print_binary(number3);
_putchar('\n');
return (0);
}
