#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: Pointer to the head of the list
 * @index: Deleted node's index
 * Return: Success - 1
 *        Otherwise - -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *pad = *head;
if (*head == NULL)
return (-1);
for (; index != 0; index--)
{
if (pad == NULL)
return (-1);
pad = pad->next;
}
if (pad == *head)
{
*head = pad->next;
if(*head != NULL)
(*head)->prev = NULL;
}
else
{
pad->prev->next = pad->next;
if (pad->next != NULL)
pad->next->prev = pad->prev;
}
free(pad);
return (1);
}
