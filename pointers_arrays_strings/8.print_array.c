#include "main.h"

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i > 0)
        {
            _putchar(',');
            _putchar(' ');
        }

        if (a[i] < 0)
        {
            _putchar('-');
            a[i] = -a[i];
        }

        if (a[i] >= 1000)
            _putchar((a[i] / 1000) + '0');

        if (a[i] >= 100)
            _putchar(((a[i] / 100) % 10) + '0');

        if (a[i] >= 10)
            _putchar(((a[i] / 10) % 10) + '0');

        _putchar((a[i] % 10) + '0');
    }

    _putchar('\n');
}
