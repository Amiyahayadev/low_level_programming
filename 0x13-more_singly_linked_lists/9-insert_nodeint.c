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
	listint_t *new, *prev, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	/*if list is empty or index is at first node*/
	if (*head == NULL || idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/*to the node just before the desired index*/
	temp = *head;
	for (i = 0; i < idx && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	/* check if index is out of range*/
	if (temp == NULL && i < idx)
	{
		free(new);
		return (NULL);
	}
	/*Insert at specific index or at the end of list*/
	new->next = temp;
	prev->next = new;
	return (new);
}
