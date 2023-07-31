#include "lists.h"

/**
 * listint_len - A function that returnthe number of elements in linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *head)
{
size_t elementsnum = 0;

while (head)
{
printf("%d\n", head->n);
elementsnum++;
head = head->next;
}
return (elementsnum);
}
