/***
 *
 * char *create_array(unsigned int size, char c) - allocates a buffer 
 * on the heap and fill it with a specific char.
 * @size - size of char 
 * @c - the character 
 ***/
#include <stdlib.h>


char *create_array(unsigned int size, char c){

	char *arr;
	unsigned int i;

	if(size == 0)
		return(NULL);
	arr = malloc(size * sizeof(char));
	if(arr == NULL)
		return (NULL);

	for(i = 0; i < size ; i++)
		arr[i] = c;
	return arr;
}
