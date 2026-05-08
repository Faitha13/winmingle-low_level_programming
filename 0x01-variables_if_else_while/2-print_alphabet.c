/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints a - z
* using putchar
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char x = 'a';
    while(x <= 'z'){
	    putchar(x);
	    x++;
    }
    putchar('\n');
    return (0);
}
