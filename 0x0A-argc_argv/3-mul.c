#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that multiplies two numbers
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = multiply(num1, num2);
printf("%d\n", result);
return (0);
}

/**
 * multiply - Multiply two numbers
 * @a: The first number
 * @b: The second number
 * Return: The result of the multiplication
 */
int multiply(int a, int b)
{
return (a * b);
}
