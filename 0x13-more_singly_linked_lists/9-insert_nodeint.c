#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: indirect reference to linked list
 * @idx: index or nth node position
 * @n: node data
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prevNode, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		prevNode = temp;
		temp = temp->next;
		if (i == idx)
		{
			new->next = temp;
			prevNode->next = new;
			return (new);
		}
		i++;
	}
	/* If insertion not possible*/
	free(new);
	return (NULL);
}
