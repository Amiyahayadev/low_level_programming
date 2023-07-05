#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: indirect reference to entire list
 * @n: integer value of list node
 * Return: pointer to new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}
