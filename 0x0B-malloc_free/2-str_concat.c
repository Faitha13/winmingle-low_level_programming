/***
 *
 *
 *
 *
 ***/

#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (s1 != NULL && s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2 != NULL && s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}

	new_str[i] = '\0';

	return (new_str);
}
