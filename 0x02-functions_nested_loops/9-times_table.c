#include "main.h"

/**
 * times_table - function that prints the 9 times tables, statring with 0
 *
 */

void times_table(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = 0;
		k = 0;
		_putchar('0');
		while (j <= 9)
		{
			k = i * j;
			if (k < 10)
			{
				if (j != 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				if (j != 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
