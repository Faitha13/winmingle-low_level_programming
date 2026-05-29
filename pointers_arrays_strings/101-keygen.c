#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - generates a random password
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];

	/* seed the random generator */
	srand(time(0));

	/* character pool: letters + digits */
	char charset[] =
		"abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"0123456789";

	int size = sizeof(charset) - 1;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % size];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
