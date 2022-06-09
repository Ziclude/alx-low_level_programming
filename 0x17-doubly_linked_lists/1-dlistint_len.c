#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints number of elements in doubly linked lists
 * @h: the pointer to doubly linked list
 * Return: the number of element in a linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t nods;
for (nods = 0; h != NULL; nods++)
h = h->next;
return (nods);
}
