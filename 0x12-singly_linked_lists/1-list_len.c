#include "lists.h"

/**
 * list_len - function counts no of elements of a Singly list
 * @h: head node pointer
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = NULL;

	if (h == NULL)
		exit(98);

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
