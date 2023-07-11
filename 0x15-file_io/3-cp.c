#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_error - displays human readable error message
 * @error_code: valid exit error code
 * @file_name: cause of error
 * Return: nothing
 */
void print_error(int error_code, const char *file_name)
{
	switch (error_code)
	{
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_name);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", strerror(errno));
			break;
		default:
			dprintf(STDERR_FILENO, "Unknown error\n");
			break;
	}
}

/**
 * copy_file_contents -  file copying logic
 * @fd_from: file descriptor of file to copy from
 * @fd_to: file descriptor of file to write into
 * @file_to: destination file name
 * Return: nothing
 */
void copy_file_contents(int fd_from, int fd_to, const char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error(99, file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		print_error(98, file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

}

/**
 * cp - copies entire content from one file to another
 * @file_from: name of the source file to copy from
 * @file_to: name of the destination file
 * Return: 1 on success
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error(99, file_to);
		close(fd_from);
		exit(99);
	}
	copy_file_contents(fd_from, fd_to, file_to);

	if (close(fd_from) == -1)
	{
		print_error(100, "");
		close(fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		print_error(100, "");
		exit(100);
	}

	return (1);
}

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	res = cp(file_from, file_to);
	if (res != 0)
		return (res);
	return (0);
}
