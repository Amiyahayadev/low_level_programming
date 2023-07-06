#include "lists.h"

/**
 * delete_nodeint_at_index - delets a node at specified index
 * @head: pointer to SLL
 * @index: index of node to delete
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	previous = NULL;

	/* Traverse to the node at index */
	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	/* Check if index is out of range */
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	previous->next = current->next;
	return (1);
}
