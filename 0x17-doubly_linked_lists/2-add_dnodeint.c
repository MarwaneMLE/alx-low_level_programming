#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning
 *  of a doubly linked list.
 *  @head: Pointer to the head i fthe list.
 *  @n: data to be added.
 *
 *  Return: the addess of the new element, or NULL if it fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Declaration of a poiner to a nne node */
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	/* if  memory provide data to the new node */
	if (new_node == NULL)
		return (NULL);

	/* Assign the provided data to the new node */
	new_node->n = n;

	/* Point the 'next' of the new node to the current first node of the list */
	new_node->next = *head;

	/* Point the 'prev' of the new node to NULL (as it's the new first node) */
	new_node->prev = NULL;

	/* If the list is not empty, update the 'prev' of the current first node */
	if ((*head) != NULL)
		(*head)->prev = new_node;

	/* Update the head pointer to point to the new first node (new_node) */
	(*head) = new_node;
	return (new_node);
}
