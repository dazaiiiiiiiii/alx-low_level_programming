#include "main.h"

/**
 * main - Entry point
 *
 *print_alphabet - Prints the alphabet in lowercase

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
