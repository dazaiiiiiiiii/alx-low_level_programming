#include "main.h"

/**
 * print_line - function that draws straight line in the terminal
 *
 * @n: takes input
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
