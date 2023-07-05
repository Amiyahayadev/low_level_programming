#include "lists.h"

/**
 * free_listint - frees a list of integer data
 * @head: direct reference to the SLL
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nextFree;

	if (head != NULL)
	{
		while (head != NULL)
		{
			nextFree = head->next;
			free(head);
			head =  nextFree;
		}
	}
}
