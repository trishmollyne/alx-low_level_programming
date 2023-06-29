#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function to reverse the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
printf("a[2] = %d\n", *(a + 2));
}
