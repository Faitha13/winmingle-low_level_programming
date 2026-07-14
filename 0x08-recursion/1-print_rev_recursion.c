 /**
  * void _print_rev_recursion(char *s) prints a string
  * in reverse
  * @*s is a pointer to the string
  * */

#include "main.h"

void _print_rev_recursion(char *s){

	if(*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
