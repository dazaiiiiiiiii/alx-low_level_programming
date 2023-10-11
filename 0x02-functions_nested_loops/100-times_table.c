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
			putchar(48);
			j = 0;
			while (j <= n)
			{
				putchar(',');
				putchar(' ');
				prod = i * j;
				if (prod <= 9)
					putchar(' ');
				if (prod <= 99)
					putchar(' ');
				if (prod >= 100)
				{
					putchar((prod / 100) + 48);
					putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					putchar((prod / 10) + 48);
				putchar ((prod % 10) + 48);
				j++;
			}
			putchar('\n');
			i++;
		}
	}
}
