#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the size of various types on the computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
char e;
int f;
long int g;
long long int h;
float i;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(i));
return (0);
}
