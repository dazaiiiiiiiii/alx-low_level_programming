#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 *
 * Return: 0 if success
 */

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			if (i == 23 && j == 59)
			{
				_putchar('\n');
				break;
			}
			_putchar('\n');
			j++;
		}
		i++;
	}
}
