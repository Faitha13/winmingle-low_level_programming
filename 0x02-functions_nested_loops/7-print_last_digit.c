#include "main.h"

/**
 * a file that gets the last digit of a number
 */

int print_last_digit(int n){
	n = n % 10;
	if(n < 0){
		n = -n;
	}
	return(n);
}

