#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all numbers of nodes.
 *
 * @h: point to header node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size_of_nodes++;
	}
	return (size_of_nodes);
}
