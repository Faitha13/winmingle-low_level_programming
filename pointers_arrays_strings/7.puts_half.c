#include "main.h"

/**
 *
 *
 *
 */

void puts_half(char *str){

	int i = 0;

	int len = 0;

	while(str[len]){

		len++;

	}

	i = len / 2;

	while(str[i]){

		_putchar(str[i]);

		i++;

	}

	_putchar('\n');
}
