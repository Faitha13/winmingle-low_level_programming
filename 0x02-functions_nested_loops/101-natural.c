#include "main.h"
#include <stdio.h>

/**
 * a file that prints the sum of 
 * multiples of 3 and 5 under 1024
 */

int print_sum_of_multiples(int n){
	int sum = 0;
	for(n = 0; n < 1024; n++){
		if(n % 3 == 0 || n % 5 == 0){
			sum = sum + n;
		}
	}
return(sum);
}
