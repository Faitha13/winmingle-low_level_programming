/***
 *
 *
 *
 *
 ***/


#include <stdlib.h>

char *_strdup(char *str){

	char *copy;
	int count, i;

	if(str == NULL)
		return NULL;
	while(str[count] != '\0')
		count++;
	copy = malloc((count + 1) * sizeof(count));

	if(copy == NULL)
		return NULL;
	for(i = 0; i < count; i++)
		copy[i] = str[i];

	return (copy);
}
