#include "main.h"
#include <stdio.h>

/**
 * a file that prints the first 50
 * fibonacci numbers
 */

int first_50_fibonacci_number(int n){
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	printf("%lu, %lu", a,b);
	for(n = 3; n <= 50; n++){
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	printf("\n");
	return(0);
}
