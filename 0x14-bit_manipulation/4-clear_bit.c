#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the number whose bit is to be cleared
 * @index: The index of the bit to clear (0-based)
 *
 * Return: 1 if it works, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n &= ~(1UL << index);
return (1);
}
