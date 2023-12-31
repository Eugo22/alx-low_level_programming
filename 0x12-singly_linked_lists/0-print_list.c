#include "lists.h"
#include <stdio.h>
/**
 * print_list -  a function that prints all the elements of a list_t list.
 *@h: Pointer to the head of the linked list.
 *
 * Return: the number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);

		h = h->next;

		count++;
	}
	return (count);
}
