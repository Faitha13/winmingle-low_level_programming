#include "main.h"

/**
 * put2 prints every other but the first string
 *
 * *str points to the string
 */

void puts2(char *str){
	int i = 0;
	
	while(str[i]){

		_putchar(str[i]);

		i += 2;

	}
	_putchar('\n');
}
