#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the linked list
 * @index: The index of the node, starting at 0
 * Return: Pointer to the node,NULL if the node dont exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;
while
(current != NULL)
{
if
(count == index)
return (current);
current = current->next;
count++;
}
}
