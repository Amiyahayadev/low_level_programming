#include "main.h"

/**
* main - program that prints it's name
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	int i, j;

	/*index of first argument is initialized to 1*/
	i = 0;
	
	/*check the no of arguments passed in is 1*/
	if (argc < 2)
		/* iterate through the characters in an argument to use putchar*/
		for (j = 0; argv[i][j] != '\0'; j++)
			_putchar(argv[i][j]);
		_putchar('\n');
	return (0);			
}
