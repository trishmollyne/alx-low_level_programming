#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;
while (current != NULL)
{
if (current->str != NULL)
{
printf("[%zu] %s\n", strlen(current->str), current->str);
}
else
{
printf("[0] (nil)\n");
}
current = current->next;
count++;
}
printf("-> %zu element%s\n", count, count > 1 ? "s" : "");
return (count);
}
