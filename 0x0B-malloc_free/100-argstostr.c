#include "main.h"
#include <stdlib.h>
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

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
	arr = malloc(size * sizeof(char) + 1);
	if (!arr)
		return (0);
	i = 0;
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
