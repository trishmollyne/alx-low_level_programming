#include "main.h"
#include <stdio.h>

/**
 * swap_int - You need a function that swaps value of two intergers
 * @a: First interger to be swapped
 * @b: Second interger to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
