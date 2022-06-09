#include "lists.h"

/**
 * free_dlistint - frees a linked list.
 * @head: The head of the list.
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *top;
while (head)
{
top = head->next;
free(head);
head = top;
}
}
