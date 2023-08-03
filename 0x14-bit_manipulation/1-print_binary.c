#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int number to be printed in binary.
 *
 * Return: void (no return value)
 */
void print_binary(unsigned long int n)
{
int shift = sizeof(n) * 8 - 1;
while (shift >= 0)
{
unsigned long int bit = (n >> shift) & 1;
shift--;
}
}
