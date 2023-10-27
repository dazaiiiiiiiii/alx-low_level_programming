#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @ac: argument counter
 * @av: argument value
 * Return: Always 0 (Success) otherwise return 1
 */

int main(int ac, char **av)
{
	int multi;

	if (ac == 3)
	{
		multi = atoi(av[1]) * atoi(av[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
