#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: array of words, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, count = 0, start, len, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count number of words */
	while (str[i])
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0')
		{
			count++;

			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	i = 0;

	/* Allocate and copy each word */
	while (str[i])
	{
		while (str[i] == ' ')
			i++;

		if (str[i] == '\0')
			break;

		start = i;

		while (str[i] != ' ' && str[i] != '\0')
			i++;

		len = i - start;

		words[j] = malloc(sizeof(char) * (len + 1));

		if (words[j] == NULL)
		{
			/* Free previously allocated words */
			for (k = 0; k < j; k++)
				free(words[k]);

			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[j][k] = str[start + k];

		words[j][len] = '\0';

		j++;
	}

	words[j] = NULL;

	return (words);
}
