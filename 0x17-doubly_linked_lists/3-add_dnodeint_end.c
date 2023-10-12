#include "lists.h"

/**
 * add_dnodeint_end - function that adds node at the end of a list.
 * @head: pointer to pointer to head of list.
 * @n: data to be added.
 *
 * Return: address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	/* Allocate memory for the new node or return NULL if allocation fails */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign data to the new node */
	new_node->n = n;

	/* The new node is the last, so 'next' is NULL */
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, set the new node as head */
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;  /* Traverse to find the last node */
	}
	/* Change the 'next' of the last node to the new node */
	last->next = new_node;

	/* Set the 'prev' of the new node to the last node */
	new_node->prev = last;

	/* Return the address of the new element */
	return (new_node);
}
