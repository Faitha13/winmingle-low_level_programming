#include <unistd.h>
#include "main.h"
/**
 * a file that prints lowercase alphabets
 * 10x
 */
void print_alphabet_x10(void){
	int i;
	char x;
	for(i = 0; i <= 10; i++){
		for(x = 'a'; x <= 'z'; x++){
			_putchar(x);
		}
		write(1, "\n", 1);
	}
}
