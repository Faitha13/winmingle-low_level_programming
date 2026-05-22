#include "main.h"
#include <stdio.h>

/**
 * a file that prints the first 50
 * fibonacci numbers
 */

int first_4m_fibonacci_number(void){
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	unsigned long int sum = 2;
	
	next = a + b;
	while(next <= 4000000){
		if(next % 2  == 0){
			sum = sum + next;
		}
                a = b;
                b = next;
		next = a + b;
	}
		
	printf("%lu", sum);
		
	printf("\n");
	return(0);
}
