#include "lists.h"

/**
 * listint_len - function that returns no of nodoes in an int list
 * @h: head node pointer
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
