#include "main.h"

/**
 * print_times_table - function that prints the n times table
 *
 * @n: takes the input
 */

void print_times_table(int n)
{
	int prod, j, i;

	if (n < 15 && n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			_putchar(48);
			j = 1;
			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');
				prod = i * j;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar ((prod % 10) + 48);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
