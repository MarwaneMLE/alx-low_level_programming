#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: 
 * @index: the index is the index of the node, starting from 0
 *
 * Return: returns the nth node
 * 	    if node does not exit NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	i = 0;

	/* Check if the head is NULL */
	 if (head == NULL)
		 return (NULL);

	 /* While the head is not NULL */
	 while (head != NULL)
	{
		/* Initialize the search here */
		if (i == index)
			break;

		i++;
		/* Make head point to the next node if the index is not found */
		head = head->next;
	}
	
	 return (head);
}
