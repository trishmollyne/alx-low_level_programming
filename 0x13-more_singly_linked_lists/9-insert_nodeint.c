#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index
 * @head: Double pointer to the head of the list
 * @idx: Index where the new node should be added (starts at 0)
 * @n: Value to be stored in the new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (head == NULL)
return (NULL);
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
listint_t *current = *head;
unsigned int count = 0;
while (current != NULL && count < idx - 1)
{
current = current->next;
count++;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
