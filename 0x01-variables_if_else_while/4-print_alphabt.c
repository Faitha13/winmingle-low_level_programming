/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints a - z
* apart from e and q using putchar
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char x = 'a';
    while(x <= 'z'){
	    if(x !='e' && x!='q'){
	    putchar(x);
	    }
	    x++;
    }
    putchar('\n');
    return (0);
}
