#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a Singly list
 * @h: head node pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	const list_t *temp = h;

	if (temp == NULL)
		return (0);

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}
	return (n);
}
