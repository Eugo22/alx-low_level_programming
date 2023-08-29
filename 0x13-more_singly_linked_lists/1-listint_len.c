#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Calculates the length of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The length of the linked list.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;
	const listint_t *current = h;

	while (current == NULL)
	{
		node++;
		current = current->next;
	}
	return (node);
}
