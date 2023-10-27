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
	int i = -1;

	while (i < ac - 1)
	{
		i++;
		printf("%s\n", av[i]);
	}
	return (0);
}
