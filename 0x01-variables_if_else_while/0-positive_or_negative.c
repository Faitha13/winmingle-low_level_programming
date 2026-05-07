/**
* Author: Nweze Faith Akwugo 
* Program: WinMingle Community C Training
* Description:  Add program that prints whether number is positive, negative, or zero
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int n;
    srand(time(0));
    n = rand() - RAND_MAX/2;
    if(n>0){
      printf("%i if positive\n", n);	
    }
    else if(n<0){
       printf("%i is negative\n", n);
    }
    else
	    printf("%i is zero\n", n);

return(0);

}
