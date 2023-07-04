#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a SL list
 * @head: holds address of the head pointer variable
 * @str: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;
	if (*head ==  NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
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

