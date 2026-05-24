#include "main.h"
/**
 * main - prints numbers from 1 to 100
 * Return: Always 0
 */


void print_fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
			}

			if (n >= 10)
			{
				_putchar(((n / 10) % 10) + '0');
			}

			_putchar((n % 10) + '0');
		}

		if (n != 100)
		{
			_putchar(' ');
		}
	}

	_putchar('\n');
}
