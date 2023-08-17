#include "lists.h"

/**
* free_dlistint - frees a listint_t list
*
* @head: pointer to begining of list
*/

void free_dlistint(dlistint_t *head)
{
	/* Initialize a pointer for the current node. */
	dlistint_t *present_node = NULL;

	/* Check if the list is empty. */
	if (!head)
		return;

	/* Set nter to the head of the list.*/
	present_node = head;

	while (head->next)
	{
		head = head->next;
		free(present_node);
		present_node = head;
	}
	free(head);
}
