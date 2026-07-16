/**
 *  int _sqrt_recursion(int n) - return the square root of a number
 *  @n - number to f8nd its square root
 *  @i - a guessed square root
 *  return - square root of n or -1
 **/

#include "main.h"

 int _sqrt_helper(int n, int i){
	 if(i * i == n)
		 return i;
	 if(i * i > n)
		 return -1;
	 return(_sqrt_helper(n, i + 1));
 }

int _sqrt_recursion(int n){

	return(_sqrt_helper(n,1));
}
