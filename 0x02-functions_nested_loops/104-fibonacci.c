#include <stdio.h>
#include "main.h"

/**
 *
 *
 */

int first_98_fib_num(void){
	int a = 1;
	int b = 2;
	int n;
	printf("%d %d", a,b);
	for (n = 3; n <= 98; n++){
		int next = a + b;
		printf(", %d", next);
		a = b;
		b = next;
		
	}
	printf("\n");
	return(0);
}

