#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */ 

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *element;

	element = malloc(sizeof(listint_t));
	if (!element)
		return (NULL);

	element->n = n;
	element->next = *head;

	*head = element;

	return (element);
}
