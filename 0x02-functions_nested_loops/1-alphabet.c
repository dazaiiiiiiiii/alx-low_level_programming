#include "main.h"

/**
 * main - Entry point
 * print_alphabet: function to write alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
