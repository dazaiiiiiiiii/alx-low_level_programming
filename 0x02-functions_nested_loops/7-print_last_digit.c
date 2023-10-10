#include "main.h"

/**
 * print_last_digit - function that print the last digit of number
 *
 * @i: takes the input
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int i)
{
	if (i < 0)
		i = -1 * (i % 10);
	else
		i = i % 10;
	_putchar(i + '0');
	return (i);
}
