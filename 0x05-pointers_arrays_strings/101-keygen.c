#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_PASSWORD_LENGTH 25

/**
 * main - entry point
 * @password: array stores password generated 
 * @charset: array to hold random characters
 *
 * Return: void
 */
int main(void)
{
	int i;

	int password_length = rand() % MAX_PASSWORD_LENGTH + 1;

	char password[MAX_PASSWORD_LENGTH + 1];

	for (i = 0; i < password_length; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	password[password_length] = '\0';
	printf("Generated password: %s\n", password);
	return 0;
}
