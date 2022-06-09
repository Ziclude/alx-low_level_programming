#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linked list.
 * @head: A pointer to the doubly linked list
 * @index: index to the node
 * Return: the nth node of a linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int cat = 0;
while (cat < index)
{
if (head == NULL)
return (NULL);
cat++;
head = head->next;
}
return (head);
}
