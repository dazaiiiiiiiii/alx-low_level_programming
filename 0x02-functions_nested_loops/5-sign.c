#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: checks the output of the function
 *
 * Return: 1 when n is greater than zero,0 when n is 0,-1 when n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
