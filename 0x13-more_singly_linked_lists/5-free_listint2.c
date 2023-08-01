#include "lists.h"

/**
 * free_listint2 - Frees linked list and sets the head pointer to NULL
 * @head: Double pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
if (head == NULL)
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
