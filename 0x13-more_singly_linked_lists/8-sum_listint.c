#include "lists.h"

/**
 * sum_listint - sums up data in a singly linked list
 * @head: address of linked list
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *currentNode;
	int sum =  0;

	if (head == NULL)
		return (0);

	currentNode = head;
	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}
	return (sum);
}
