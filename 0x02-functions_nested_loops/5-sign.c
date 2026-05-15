#include <unistd.h>
#include "main.h"

/**
 * A file that checks for signs of a number
 */

int print_sign(int n){
	if(n == 0){
		write(1, "0", 1);
		return(0);
	}
	else if(n > 0){
		write(1, "+", 1);
		return(1);
	}
	else{
		write(1, "-", 1);
		return(-1);
	}
}
