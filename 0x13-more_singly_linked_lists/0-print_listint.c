#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
size_t nodenum = 0;
while (h)
{
printf("%d\n", h->n);
nodenum++;
h = h->next;
}
return (nodenum);
}
