#include "lists.h"

/**
* print_dlistint - prints all elements of a dlistint_t list
*
* @h: pointer to the list.
*len: lenth of the node.
* Return: number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	/* Initialize the length counter. */
	size_t len = 0;
	/* Initialize a pointer to the node. */
	const dlistint_t *present_node = NULL;

	if (!h)
		return (len);

	/* Set the node pointer to the head of the list. */
	present_node = h;

	/* loop through to iterate the linked list and print the node's data. */
	while (present_node)
	{
		len++;
		printf("%d\n", present_node->n);
		present_node = present_node->next;
	}
	return (len);
}

