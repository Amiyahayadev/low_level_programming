#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: text to be written into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;
	size_t content_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_length = _strlen(text_content);
		n = write(fd, text_content, content_length);
		if (n == -1 || !n)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the actual length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

