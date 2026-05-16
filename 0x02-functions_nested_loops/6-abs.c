#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * a file that prints the absolute value
 * of numbers
 */

int _abs(int n){
	if(n < 0 || n > 0){
		printf("%d",abs(n));
	}
	return(0);
}


