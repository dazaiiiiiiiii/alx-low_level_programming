#include "main.h"

/**
 * print_number - function that print an integer
 *
 * @n: take input
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
