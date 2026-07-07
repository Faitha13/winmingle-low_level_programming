
/**
 * _strstr - locates the first character in a string
 *            that matches any character in another string
 * @haystack: string to search
 * @needle: string containing accepted characters
 *
 * Return: pointer to the first matching character in s,
 * or NULL (0) if no match is found.
 */
#include "main.h"

char *_strstr(char *haystack, char *needle){
	unsigned int i, j;

	if(needle[0] == '\0')
	return(haystack);
	for(i = 0; haystack[i] != '\0'; i++){
		for(j = 0; needle[j] != '\0'; j++){
			if(haystack[i + j] != needle[j])
			break;
		}
		if(needle[j] == '\0')
		return (&haystack[i]);
	}

	return 0;
}
