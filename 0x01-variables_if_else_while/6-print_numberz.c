/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints all the numbers in base 10
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 0;
	while(x < 10){
		putchar(48 + x);
		x++;
	}
	putchar('\n');
return(0);	
}

