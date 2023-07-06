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
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	/* Check for position out of range*/
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL && i < idx - 1)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		prevNode = temp;
		new->next = temp->next;
		prevNode->next = new;
	}
	return (new);
}
