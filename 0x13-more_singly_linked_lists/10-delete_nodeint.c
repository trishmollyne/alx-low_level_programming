#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at given index in linked list
 * @head: Double pointer to the head of the linked list
 * @index: Index of the node that should be deleted (starts at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return (-1);
listint_t *current = *head;
listint_t *prev = NULL;
unsigned int count = 0;
while (current != NULL)
{
if (count == index)
{
if (prev != NULL)
{
prev->next = current->next;
}
else
{
*head = current->next;
}
free(current);
return (1);
}
prev = current;
current = current->next;
count++;
}
return (-1);
}
