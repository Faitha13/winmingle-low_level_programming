#include "main.h"

/**
 * print_square prints square with hash
 *
 * @n - number of times the hash is printed
 */

void print_square(int size){
	int a,b;
	if(size <= 0){
		_putchar('\n');
		return;
	}
	for(a = 0; a < size; a++){
		for(b = 0; b < size; b++){
			_putchar('#');
		}
		_putchar('\n');
	}
}
