#include "main.h"

void times_table(void){
	int z;
	int y;
	int x;
	for(x = 0; x <= 9; x++){
		for(y = 0; y <= 9; y++){
			z = x * y;
			if(y == 0){
				_putchar('0' + z);
			}
			else{
				_putchar(',');
				_putchar(' ');

				if (z < 10)
				{
					_putchar(' ');
					_putchar('0' + z);
				}
				else
				{
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}

