#include "main.h"

/**
 * more_numbers - function that prints 10 tmes the numbers from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10 && i <= 14)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
