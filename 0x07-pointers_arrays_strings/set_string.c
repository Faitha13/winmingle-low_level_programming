
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer that will be updated
 * @to: string to assign to s
 */
void set_string(char **s, char *to)
{
	*s = to;
}
