#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data n.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all data (n) in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
