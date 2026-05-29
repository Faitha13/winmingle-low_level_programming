#include "main.h"

/**
 * _puts prints strings followed by a new line
 *
 * @*str points to the string
 */

void print_rev(char *s){

	int i = 0;

	while (s[i]){
		i++;
	}
		while (i >= 0){
                _putchar(s[i]);
                i--;
		}

	_putchar('\n');
}

