#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the data
 *(n) of a dlistint_t linked list.
 * @head:Pointer to the head of the list.
 *
 * Return: 0 if list is empty, sum if not
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
