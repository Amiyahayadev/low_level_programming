#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point of program
 * Description - Program that adds all positive numbers
 * @argc: count of all arguments
 * @argv: the string arguments passed from command line
 * Return: 0 on SUCCESS, 1 on FAILURE
 */
int main(int argc, char *argv[])
{
	int i, j;

	int sum = 0;
	int error = 0;

	/*check	IF  no character was passed */
	if (argc == 1)
		printf("0\n");
	else
	{
		/*iterate through the string arguments */
		for (i = 1; i < argc; i++)
		{
		/*check IF the current character in each string is a digit */
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				/*If isn't, set error flag to 1 and BREAK out of 1st loopt*/
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					error = 1;
					break;
				}
			}
		}
		if (!error)
		{	
			for (i = 1; i < argc; i++)
			{
				sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
		}
	}	
	return (error ? 1 : 0);
}

