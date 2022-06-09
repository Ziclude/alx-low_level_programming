#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: Pointer to the head
 * @n: integer to the new node to contain.
 * Return: Null - if function fails
 *         Address of the new node - If function succeed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nouv;
nouv = malloc(sizeof(dlistint_t));
if (nouv == NULL)
return (NULL);
nouv->n = n;
nouv->prev = NULL;
nouv->next = *head;
if (*head != NULL)
(*head)->prev = nouv;
*head = nouv;
return (nouv);
}
