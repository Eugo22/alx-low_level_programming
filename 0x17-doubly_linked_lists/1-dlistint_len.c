#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: pointer to the head of the list.
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_node = 0;

	while (h != NULL)
	{
		num_of_node++;

		h = h->next;
	}

	return (num_of_node);
}
