#include "main.h"

/**
 * puts2 - every other character printed on string
 * @str: printed string
 */
void puts2(char *str)
{

int i = 0;
int w = 0;

while (str[w] != '\0')
{
w++;
}

for (i = 0; i < w; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
