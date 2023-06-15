#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the size of various types on the computer it is compiled on
 *
 * Return: 0 (Success)
 */
int main(void)
{
char e;
int f;long int g;
long long int h;
float i;
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
