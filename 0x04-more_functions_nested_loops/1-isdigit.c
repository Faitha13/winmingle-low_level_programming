#include "main.h"

/**
 * a file checks for digit 0-9
 */

int _isdigit(int c){
	if(c >= '0' && c <= '9'){
		return(1);
	}
	return(0);
}
