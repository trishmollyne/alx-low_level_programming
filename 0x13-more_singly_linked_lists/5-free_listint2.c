#include "lists.h"

/**
 * free_listint2 - Frees linked list of integers and sets head pointer to NULL
 * @head: Double pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
if
(head == NULL)
return;
listint_t *current = *head;
listint_t *next;
while
(current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}
