#include "main.h"
#include <stddef.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *ptr = (char *)&num;
return (*ptr);
}
int main(void)
{
int endianness = get_endianness();
if (endianness)
write(1, "Little Endian\n", 14);
else
write(1, "Big Endian\n", 11);
return (0);
}
