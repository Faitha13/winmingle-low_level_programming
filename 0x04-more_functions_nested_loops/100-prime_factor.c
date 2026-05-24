#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
        long int n = 612852475143;
        long int factor = 2;
        long int largest = 0;

        while (n > 1)
        {
                if (n % factor == 0)
                {
                        largest = factor;
                        n = n / factor;
                }
                else
                {
                        factor++;
                }
        }

        printf("%ld\n", largest);

        return (0);
}
