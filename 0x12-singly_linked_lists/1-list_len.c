#include <stdio.h>
#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list.
 * @h: points to the head of the linked list
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
