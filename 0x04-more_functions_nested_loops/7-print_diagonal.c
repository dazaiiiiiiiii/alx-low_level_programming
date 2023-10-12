#include "main.h"

/**
 * print_diagonal - function that draws a diagonal on the terimnal
 *
 * @n: take input
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n < 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
}
