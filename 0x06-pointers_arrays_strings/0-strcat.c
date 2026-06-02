#include "main.h"

/**
 *
 * char *_strcat(char *dest, char *src) concatenates two
 * strings
 *
 * *dest and *src are words to concatenate
 */

char *_strcat(char *dest, char *src){
	int j = 0;
	int i = 0;

	while(dest[j] != '\0'){
		j++;
	}

	while(src[i] != '\0'){
		dest[j] = src[i];

		j++;
		i++;
	}

	dest[j] = '\0';

	return(dest);

}
