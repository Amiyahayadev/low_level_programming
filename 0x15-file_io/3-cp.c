#include "main.h"
#include <stdio.h>

/**
 * handle_read_error - handles read error and exits
 * @file_name: cause of error
 * Return: nothing
 */
void handle_read_error(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	exit(98);
}

/**
 * handle_write_error - handles write error and exits
 * @file_name: cause of error
 * Return: nothing
 */
void handle_write_error(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_name);
	exit(99);
}

/**
 * cp -  copies entire content from one file to another
 * @fd_from: file descriptor of file to copy from
 * @fd_to: file descriptor of file to write into
 * @file_to: destination file name
 * @file_from: source file
 * Return: 0
 */
void cp(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buffer[BUFFER_SIZE];
	int bytes_read = 1, bytes_written, count;

	while (bytes_read != 0)
	{
		bytes_read = read(fd_from, buffer, sizeof(buffer));
		if (bytes_read == -1)
			handle_read_error(file_from);

		bytes_written = 0;
		while (bytes_written < bytes_read)
		{
			count = write(fd_to, buffer + bytes_written, bytes_read - bytes_written);
			if (count == -1)
				handle_write_error(file_to);
			bytes_written += count;
		}
	}
}

/**
 * check_file_close - checks if fail failes to close, handles errors
 * @ret: return value of the file descriptor
 * Return: nothing
 */
void check_file_close(int ret)
{
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ret);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of string arguments
 * Return: 0 on  Success, exit on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int ret_frm, ret_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		handle_read_error(argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		handle_write_error(argv[2]);
	}
	cp(fd_from, fd_to, argv[1], argv[2]);/*call to cp*/

	ret_to = close(fd_to);
	check_file_close(ret_to);
	ret_frm = close(fd_from);
	check_file_close(ret_frm);

	return (0);
}

