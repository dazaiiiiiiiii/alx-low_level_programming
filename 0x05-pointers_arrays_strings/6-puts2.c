#include "main.h"

/**
 * puts2 - function that prints every other chars of a string
 *
 * @str: takes input
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
