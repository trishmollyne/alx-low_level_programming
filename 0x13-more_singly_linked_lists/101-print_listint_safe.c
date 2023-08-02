#include "lists.h"

/**
 * print_listint_safe - Prints a linked list with loop detection
 * @head: Pointer to the head of the linked list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;
slow = head;
fast = head;
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("-> [%p] %d\n", (const void *)slow, slow->data);
exit(98);
}
printf("[%p] %d\n", (const void *)slow, slow->data);
count++;
}
while (slow)
{
printf("[%p] %d\n", (const void *)slow, slow->data);
slow = slow->next;
count++;
}
return (count);
}
