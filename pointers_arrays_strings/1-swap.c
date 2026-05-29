#include "main.h"

/**
 * swap_int swaps tge value of two integers
 *
 * *a and *b are the addresses of the respective
 * integers to be swapped
 *
 */

void swap_int(int *a, int *b){
	int c;
	c = *a * *b;
	*a = c / *a;
	*b = c / *b;
}
