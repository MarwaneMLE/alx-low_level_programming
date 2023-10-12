#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list.
 * @h: the pointer point to the head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	/*Initialize a variable to keep track of the number of elements*/
	size_t counter = 0;

	/*Iterate through the doubly linked list while the pointer 'h' is not NULL*/
	while (h != NULL)
	{
		/* Increment the counter of printed elements */
		counter++;
		/* Move to the next element in the list */
		h = h->next;
	}

	return (counter); /* return total number of elements printed*/
}
