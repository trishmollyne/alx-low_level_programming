#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of intergers to be printed
 * @a: The array of integers
 * @n: The number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{

int p;

for (p = 0; p < n; p++)
{
printf("%d", a[p]);
if (p != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
