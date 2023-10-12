#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Apointer to the head of the list.
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_counts = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		nodes_counts++;
	}

	return (nodes_counts);
}