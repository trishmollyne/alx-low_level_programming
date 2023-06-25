#include "main.h"

/**
 * compute_sum - list all the natural numbers below 10
 * Return: Always 0
 */

int compute_sum(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}
return (0);
}
