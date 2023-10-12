#include "main.h"

/**
 * print_triangle - function that prints a triangel
 *
 * @size: takese input
 */

void print_triangle(int size)
{
	int i = 0;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		i++;
		_putchar('\n');
	}
}
