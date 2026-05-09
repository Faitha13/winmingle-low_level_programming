/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints whether number is positive, negative, or zero
*/

#include <stdio.h>

int main(void){
    int a;
    int b;

    for(a = 0; a <= 8; a++){
        for(b = a + 1; b <= 9; b++){
            putchar(a + '0');
            putchar(b + '0');
	    putchar(',');
	    putchar(' ');
	}
    }

return(0);
}
   
