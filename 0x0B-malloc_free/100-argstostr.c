#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that return the length of str
 *
 * @str: takes input
 * Return: return length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * argstostr - function that concatenates
 * all the arguments of your program.
 *
 * @ac: count argument
 * @av: argument value
 * Return: a *p to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, index;
	char *arr;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		size += _strlen(av[i]);
		i++;
	}
	arr = malloc(size * sizeof(char) + (ac + 1));
	if (!arr)
		return (0);
	i = 0;
	index = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arr[index] = av[i][j];
			j++;
			index++;
		}
		i++;
		arr[index] = '\n';
		index++;
	}
	return (arr);
}
