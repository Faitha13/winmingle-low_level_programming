#include <unistd.h>
#include "main.h"
/**
 * a file that printsva to z
 */
	
void print_alphabet(void){
	char x;

	for(x = 'a'; x <= 'z'; x++){

	_putchar(x);
	write(1, "\n", 1);

	}
}
