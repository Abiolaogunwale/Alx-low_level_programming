#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - A new node is added at the beginning of a listint_t list.
* @head: pointer to head pointer to the list.
* @n: number to add.
* Return: pointer to the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Initialize a pointer for the new node. */
	dlistint_t *present_node = NULL;

	/* Allocate memory for the new node. */
	present_node = malloc(sizeof(dlistint_t));

	/* Check the memory allocation status. */
	if (!present_node)
		return (NULL);

	present_node->n = (int)n;
	present_node->next = NULL;
	present_node->prev = NULL;

	/* Check if the list is empty. */
	if (!*head)
	{
		*head = present_node;
		return (present_node);
	}
	present_node->next = *head;
	(*head)->prev = present_node;
	*head = present_node;

	return (present_node);
}

