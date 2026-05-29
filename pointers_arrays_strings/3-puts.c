#include "main.h"

/**
 * _puts prints strings followed by a new line
 *
 * @*str points to the address of the string
 */

void _puts(char *str){

	int i = 0;
	
	while(str[i]){

	_putchar(str[i]);

	i++;
	}

	_putchar('\n');
}

