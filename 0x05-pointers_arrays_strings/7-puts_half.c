#include "main.h"

/**
 * puts_half - function that prints half of string
 *
 * @str: takes string
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i])
		i++;
	if (i % 2 != 0)
	{
		i = ((i + 1) / 2);
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		n = i / 2;
		while (str[n])
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
