/***
 * int is_prime_number(int n) - determines which number is prime 
 * or not
 * @n - number to be used for calculstion
 * return - 1 or 0
 *
 ***/

#include "main.h"

int is_prime_assist(int n, int i){

	if(n < 2)
		return 0;
	
	if(i == n)
		return 1;
	if(n % i == 0)
		return 1;
	return( is_prime_assist(n, i + 1));
	
}



int is_prime_number(int n){

	return(is_prime_assist(n, 2));
}
