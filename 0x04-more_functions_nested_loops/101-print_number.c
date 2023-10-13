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
		putchar('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
		putchar(n + '0');
	else
	{
		print_number(n / 10);
		putchar(n % 10 + '0');
	}
}
