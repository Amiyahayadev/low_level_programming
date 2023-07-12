#include "main.h"

/**
 * append_text_to_file - function that appends text to the end of file
 * @filename: name of file to add text to
 * @text_content: text to be written into file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t n, content_length;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND , 0664);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_length = _strlen(text_content);
		n = write(fd, text_content, content_length);
		if (n == -1 || n != content_length)
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
