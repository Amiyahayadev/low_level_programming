#include <stdio.h>

/**
 * main - program that prints a string to std error
 * Description - @msg is Pointer variable that holds string
 * write function is used to write string to the standard error,
 * argument is 2, represents the file descriptor for standard error.
 * Return: 1
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

	int i;

	for (i = 0; msg[i] != '\0'; i++)

	write(2, msg, i);
	return (1);
}
