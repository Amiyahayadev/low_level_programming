#include "main.h"

/**
 * read_textfile - reads ands writes a text file to the POSIX stdout
 * @filename: name of file to be read
 * @letters: count of bytes to read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	signed int n, r;
	char *buff = malloc((letters + 1) * sizeof(char));

	if (!buff)
		return (-1);
	fd = open(filename, O_RDWR | 0644);
	if (fd < 0 || filename == NULL)
		return (0);

	do {
		r = read(fd, buff, letters);
	} while (r == -1 && errno == EINTR);
	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[r] = '\0';
	n = write(STDOUT_FILENO, buff, r);
	if (n == -1 || !r)
		return (0);
	else
		return (n);

	free(buff);
	close(fd);
}
