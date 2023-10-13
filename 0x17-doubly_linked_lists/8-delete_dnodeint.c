#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a specific index in a doubly linked list.
 * @head: Double pointer to the head of the linked list.
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if deletion is successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL) (*head)->prev = NULL;
		free(current);
		return (-1);
	}

	for (i = 0; current && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (-1);
}
/**
 * Prints the elements of a doubly linked list.
 *
 * @param head Pointer to the head of the linked list.
 */
void print_dlist(dlistint_t *head)
{
	while (head)
	{
		printf("%d ", head->n);
		head = head->next;
	}
	printf("\n");
}
