#include "main.h"

/**
 *
 * a function that changes all lowercase letters of a string to uppercase.
 *
 */


char *string_toupper(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');

        i++;
    }

    return (str);
}
