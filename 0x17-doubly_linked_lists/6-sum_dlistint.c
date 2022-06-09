#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: head of a linked list
 * Return: Data's sum.
 */

int sum_dlistint(dlistint_t *head)
{
int add = 0;
while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
