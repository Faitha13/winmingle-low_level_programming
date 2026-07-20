/***
 *
 * this program uses argc and argv to 
 * print a program's name
 *
 ***/
#include <stdio.h>

int main(int argc, char *argv[]){

	
	if(argc >0){
	printf("%s\n", argv[0]);
		}
	return 0;

}
