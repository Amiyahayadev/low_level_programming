#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: head node pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp, *nextNode;

	temp =  head;
	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp->str);
		free(temp);
		temp = nextNode;
	}
}
