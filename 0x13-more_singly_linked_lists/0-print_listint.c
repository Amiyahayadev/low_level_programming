#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints a list of integers
 * @h: head node pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		if (!temp->n)
			printf("0\n");
		else
			printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
