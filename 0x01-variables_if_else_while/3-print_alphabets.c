/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints a - z
* and A - Z using putchar
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char x = 'a';
    while(x <= 'z'){
	    putchar(x);
	    x++;
    }
    x = 'A';
    while(x <= 'Z'){
	    putchar(x);
	    x++;
    }
    putchar('\n');
    return (0);
}
