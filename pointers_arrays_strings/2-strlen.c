#include "main.h"

/**
 * _strlen gets the lengths chars in a word
 *
 * *s points to the address of the string
 */

int _strlen(char *s){
	int i = 0;

	while(s[i]){
		i++;
	}
	return(i);
}
