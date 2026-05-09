/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints all the numbers in base 10 with comma and spaces.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	for(x=0;x<=9;x++){
	putchar(x + '0');
	if(x != 9){
	putchar(',');
	putchar(' ');
	putchar('\n');
	}
	}
return(0);	
}

