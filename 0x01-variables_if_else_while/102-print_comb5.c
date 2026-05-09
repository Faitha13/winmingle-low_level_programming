/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints whether number is positive, negative, or zero
*/

#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    int d;

    for(a = 0; a <= 8; a++){
        for(b = a + 1; b <= 9; b++){
		for(c = 0; c <= 8; c++){
			for(d = c + 1; d <= 9; d++){
            putchar(a + '0');
            putchar(c + '0');
	    putchar(',');
	    putchar(' ');
	    putchar(b + '0');
	    putchar(d + '0');
	    putchar(',');
	    putchar(' ');
	                }

                }
	}
    }
return(0);
}
   
