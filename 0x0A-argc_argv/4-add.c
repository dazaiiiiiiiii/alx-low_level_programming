#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_str_number - checks if string contains numbers
 * @c: the string
 * Return: returns 1 if given string only contains numbers, 0 otherwise.
 **/

int check_str_number(char *c)
{
	while (*c)
	{
		if (*c >= '0' && *c <= '9')
			c++;
		else
			return (1);
	}
	return (0);
}

/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (check_str_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
