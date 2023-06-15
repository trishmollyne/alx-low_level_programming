#include <stdio.h>
/**
 * main - Entry poPrints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
char e;
int f;
long int g;
long long int h;
float i;
printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of int: %zu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(i));
return (0);
}
