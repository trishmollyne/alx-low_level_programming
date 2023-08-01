#include "lists.h"

/**
 * listint_len - A function that returnthe number of elements in linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
size_t elementsnum = 0;
while (h)
{
printf("%d\n", h->n);
elementsnum++;
h = h->next;
}
return (elementsnum);
}
