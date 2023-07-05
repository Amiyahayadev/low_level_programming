#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to head node pointer
 * Return: the head node’s data (n) or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tempDelete;

	if (*head == NULL || head == NULL)
		return (0);

	tempDelete = *head;
	*head = (*head)->next;
	n = tempDelete->n;
	free(tempDelete);
	return (n);
}
