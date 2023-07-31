#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the linked list
 * Return: The address of node where the loop starts,NULL when no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
