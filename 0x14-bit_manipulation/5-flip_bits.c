#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to flip
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits needed to flip in order to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff)
{
count += diff & 1;
diff >>= 1;
}
return (count);
}
