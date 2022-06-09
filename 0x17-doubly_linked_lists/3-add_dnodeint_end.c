#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: A pointer to the doubly linked list
 * @n: data
 * Return: New node address if function succeed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nouvnode, *bridge;
if (head == NULL)
return (NULL);
nouvnode = malloc(sizeof(dlistint_t));
if (nouvnode == NULL)
return (NULL);
nouvnode->n = n;
if (*head == NULL)
{
nouvnode->next = *head;
nouvnode->prev = NULL;
*head = nouvnode;
}
else
{
bridge = *head;
while (bridge->next != NULL)
bridge = bridge->next;
nouvnode->next = NULL;
nouvnode->prev = bridge;
bridge->next = nouvnode;
}
return (nouvnode);
}
