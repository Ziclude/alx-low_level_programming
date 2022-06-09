#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to pointer the list
 * @idx: node's index
 * @n: new node's integer
 * Return: Address of the new node - If function succeed
 *         NULL - If function fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *top = *h, *nouv;
if (idx == 0)
return (add_dnodeint(h, n));
for (; idx != 1; idx--)
{
top = top->next;
if (top == NULL)
return (NULL);
}
if (top->next == NULL)
return (add_dnodeint_end(h, n));
nouv = malloc(sizeof(dlistint_t));
if (nouv == NULL)
return (NULL);
nouv->n = n;
nouv->prev = top;
nouv->next = top->next;
top->next->prev = nouv;
top->next = nouv;
return (nouv);
}
