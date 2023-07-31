#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Double pointer to the head of the linked list (listint_t)
 * @n: Integer value to be added to the new node
 *
 * Return: The address of the new element or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));

if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}
