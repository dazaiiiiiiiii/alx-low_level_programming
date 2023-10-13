#include "main.h"

/**
 * print_number - function that prints an int
 *
 * @n: take intput
 */

void print_number(int n)
{
	unsigned int nb = n;

	if (n < 0)
	{
		putchar('-');
		nb = -n;
	}
	if (nb <= 9)
		putchar(nb + '0');
	else
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
}
