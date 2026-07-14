/**
 * void _puts_recursion(char *s) - prints a string with
 * a newline
 * @*s - is a pointer to the string
 **/
#include "main.h"

void _puts_recursion(char *s){

	if(*s == '\0'){

		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
