#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t linked list with possible loops
 * @h: Double pointer to the head of the linked list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current = *h;
listint_t *temp;
while (current != NULL)
{
size++;
if (current < current->next)
{
temp = current;
current = current->next;
free(temp);
}
else
{
*h = NULL;
break;
}
}
return (size);
}
