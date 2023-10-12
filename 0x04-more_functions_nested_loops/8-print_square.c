#include "main.h"

/**
 * print_square - function that prints square
 *
 * @size: take input
 */

void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
