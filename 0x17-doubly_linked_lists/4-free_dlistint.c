#include "lists.h"

/**
 * free_dlistint - Function that frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: No return value.
 */

void free_dlistint(dlistint_t *head)
{
	/* Check if the head is NULL and return if it is */
	while (head != NULL)
	{
		/* Traverse the list, freeing each node*/
		dlistint_t *next = head->next; /* Store the next node's address */

		free(head); /* Free the current node */

		head = next; /* Move to the next node in the list */
	}
}
