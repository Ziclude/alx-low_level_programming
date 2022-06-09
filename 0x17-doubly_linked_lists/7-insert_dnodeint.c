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
dlistint_t *nouvnode;
dlistint_t *bridge;
unsigned int stp;
if (h == NULL)
return (NULL);
nouvnode = malloc(sizeof(dlistint_t));
if (nouvnode == NULL)
return (NULL);
nouvnode->n = n;
if (idx == 0)
{
nouvnode->next = *h;
nouvnode->prev = NULL;
if (nouvnode->next != NULL)
nouvnode->next->prev = nouvnode;
*h = nouvnode;
}
else
{
bridge = *h;
for (stp = 0; bridge != NULL && stp < (idx - 1); stp++)
bridge = bridge->next;
if (bridge == NULL)
{
free(nouvnode);
return (NULL);
}
nouvnode->next = bridge->next;
nouvnode->prev = bridge;
if (bridge->next != NULL)
bridge->next->prev = nouvnode;
bridge->next = nouvnode;
}
return (nouvnode);
}
