#include "lists.h"

/**
 * get_nodeint_at_index - function that finds the nth node of a linked list.
 * @head: head node pointer
 * @index: represents index of nth node
 * Return: the nth node of list or NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	nthNode = head;
	while (nthNode != NULL)
	{
		if (i == index)
			return (nthNode);
		nthNode =  nthNode->next;
		i++;
	}
	return (NULL);
}
