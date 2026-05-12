
#include "main.h"
#include <unistd.h>
 
/**
 * a file thst initializes a varible in another function
 */

int main(void) {
	int i = 0;
	char c;
	char a[] = "_putchar";
	while(i <= 8){
	    c = a[i];
	    _putchar(c);

	    i++;
	}
	write(1, "\n" ,1);
        return(0);
}
