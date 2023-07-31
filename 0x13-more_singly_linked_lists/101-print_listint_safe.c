#include "lists.h"

/**
 * print_listint_safe - Prints a linked list with loop detection
 * @head: Pointer to the head of the linked list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t node_count = 0;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if
(slow == fast) {
printf("Loop detected. Exiting with status 98.\n");
exit(98);
}
}
while
(head != NULL) {
printf("%d\n", head->n);
head = head->next;
node_count++;
}
return (node_count);
}
