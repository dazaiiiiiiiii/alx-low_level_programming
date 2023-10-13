#include "main.h"

/**
 * print_number - function that print an integer
 *
 * @n: take input
 */

void print_number(int n)
{
	unsigned int nb = n;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	if (n >= 0 && n <= 9)
		_putchar(nb + '0');
	else
	{
		print_number(nb / 10);
		_putchar(nb % 10 + '0');
	}
}
