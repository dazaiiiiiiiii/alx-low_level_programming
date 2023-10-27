#include "main.h"

/**
 * main - Entry point
 *
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
	{
		while (av[0][i])
		{
			_putchar(av[0][i]);
			i++;
		}
		_putchar('\n');
	}
	return (0);
}
