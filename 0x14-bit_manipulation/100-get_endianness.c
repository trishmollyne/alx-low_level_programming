#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *byte_ptr = (char *)&num;

    /*
     * If 1st byte (lowest address) contains the least significant bit (1),
     * the system is little-endian. Otherwise, it's big-endian.
     */
return (*byte_ptr == 1);
}
