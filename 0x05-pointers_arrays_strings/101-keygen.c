#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * @password: array stores password generated 
 * @charset: array to hold random characters
 *
 * Return: void
 */
int main(void)
{
	const int password_length = 14;
	
	char password[password_length + 1];

	const char charset[] = "abcdefghijklmnopqrstuvwxyz!ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));
	int i;
	for (i = 0; i < password_length; i++)
	{
		int index = rand() % sizeof(charset) - 1;
		password[i] = charset[index];
	}

	password[password_length] = '\0';
	printf("%s\n", password);

	return (0);
}
