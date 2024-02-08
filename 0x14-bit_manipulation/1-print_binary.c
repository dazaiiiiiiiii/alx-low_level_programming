#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that convert d dic to bin
 *
 * @n: input dicimal
 */

void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int current;

	count = 0;
	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
