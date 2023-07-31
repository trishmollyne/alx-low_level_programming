#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list
 * @head: Pointer to the head of the linked list
 */

void free_listint(listint_t *head)
{
listint_t *current = head;
while (current)
{
listint_t *temp = current;
current = current->next;
free(temp);
}
}
