#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the data
 *(n) of a dlistint_t linked list.
 * @head:Pointer to the head of the list.
 * Return: 0 if  list is empty
 * 	   sum if not
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/*  Iterate through the linked list while the pointer 'head' is not NULL */
	while (!head)
	{
		/*  Iterate through the linked list while the pointer 'head' is not NULL  */
		sum += head->n;

		/* Move to the next node in the list */
		head = head->next;
	}

	return sum;
}
