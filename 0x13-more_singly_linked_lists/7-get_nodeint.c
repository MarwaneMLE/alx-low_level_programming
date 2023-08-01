#include "lists.h"

/**
 * get_nodeint_at_index -  returns the node at a certain index in a linked list
 * @head: pointer to first node
 * @index: index of node to get
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int n;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp ? temp : NULL);
}
