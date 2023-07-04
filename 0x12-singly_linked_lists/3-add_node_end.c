#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: holds address of the head pointer variable
 * @str: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode, *temp;

	if (head == NULL || str == NULL)
		return (0);

	endNode = malloc(sizeof(list_t));
	if (endNode == NULL)
		return (NULL);
	endNode->str = strdup(str);
	endNode->len = _strlen(str);
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = endNode;
	}
	return (endNode);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the actual length of the string
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
