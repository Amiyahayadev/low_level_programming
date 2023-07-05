#include "lists.h"

/**
 * free_listint2 - frees a list of integer data and sets it to NULL
 * @head: Indirect reference to the SLL
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nextFree;

	if (head != NULL && *head != NULL)
	{
		while (*head != NULL)
		{
			nextFree = (*head)->next;
			free(*head);
			*head =  nextFree;
		}
		*head = NULL;
	}
}
