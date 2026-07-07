/**
 * _strpbrk - locates the first character in a string
 *            that matches any character in another string
 * @s: string to search
 * @accept: string containing accepted characters
 *
 * Return: pointer to the first matching character in s,
 * or NULL (0) if no match is found.
 */
#include "main.h"

char *_strpbrk(char *s, char *accept){

	unsigned int i, j;

	for(i = 0; s[i] != '\0'; i++){
		for(j = 0; accept[j] != '\0'; j++){
			if(s[i] == accept[j])
				return(&s[i]);
		}

	}

	return 0;
}
	
