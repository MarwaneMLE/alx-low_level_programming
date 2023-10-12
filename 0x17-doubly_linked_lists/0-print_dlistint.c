#include "lists.h"


/**
 * print_dlistint - print all the elements of a doubly list
 * @h: the pointer point to the headt of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	/*Initialize a variable to keep track of the number of nodes*/
	size_t counter = 0;

	/*Iterate through the doubly linked list while the pointer 'h' is not NULL*/
	while (h != NULL)
	{
		/* Print the value of the current node's 'n' member*/
		printf("%d\n", h->n);
		/* Increment the counter of printed nodes */
		counter++;
		/* Move to the next node in the list */
		h = h->next;
	}

	return (counter); /* return total number of nodes printed*/
}
