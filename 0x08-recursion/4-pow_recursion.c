/**
 * int _pow_recursion(int x, int y) - returns the value of x raised to 
 * the power of y
 * @x and @y - integers for the calculation
 * return - x ra8sed to power y
 */

#include "main.h"

int _pow_recursion(int x, int y){
	 if(y < 0)
		 return -1;

	 if(y == 0)
		 return 1;

	 return(x * _pow_recursion(x, y-1));
}
