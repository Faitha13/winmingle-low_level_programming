#include "main.h"
/**
 * a file that prints natural
 * numbers from n to 98
 */

void print_to_98(int n)
{
	int num;

	while (n != 98)
	{
		num = n;

		/* Handle negative numbers */
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		/* Print hundreds digit (for numbers like 100, 102) */
		if (num >= 100)
		{
			_putchar((num / 100) + '0');
			num %= 100;
		}

		/* Print tens digit */
		if (num >= 10)
		{
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		else
		{
			_putchar(num + '0');
		}

		_putchar(',');
		_putchar(' ');

		if (n < 98)
			n++;
		else
			n--;
	}

	/* Print 98 */
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
