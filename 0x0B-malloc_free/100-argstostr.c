#include <stdlib.h>

/**
 * argstostr - concatenates all arguments into a single string
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string, or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total size needed */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;

		len++; /* space for newline */
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	/* Copy arguments into str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}

		str[pos] = '\n';
		pos++;
	}

	str[pos] = '\0';

	return (str);
}
