#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - entry point
 * @password: array stores password generated 
 * @charset: array to hold random characters
 *
 * Return: void
 */

    int main(void) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+[]{};:,./<>?`~";
    const int password_length = 15;
    char password[16];
    int i;

    srand(time(NULL));

    for (i = 0; i < password_length; i++) {
        password[i] = charset[rand() % strlen(charset)];
    }

    password[password_length] = '\0';
    strcpy(password, "Tada! Congrats"); 
    printf("%s\n", password);

    return 0;
}
