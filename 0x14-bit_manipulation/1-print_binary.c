#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that convert d dic to bin
 *
 * @n: input dicimal
 */

void print_binary(unsigned long int n)
{
	int array[32];
	int i;

	i = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		array[i] = n & 1;
		n >>= 1;
		i++;
	}
	while (i - 1 >= 0)
	{
		_putchar(array[i - 1] + '0');
		i--;
	}
}
