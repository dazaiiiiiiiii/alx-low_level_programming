#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that return *p copy of the str given as a param
 *
 * @str: input str
 * Return: 0 if str is NULL otherwise return the array
 */

char *_strdup(char *str)
{
	char *s;
	int size = 0;
	int i;

	while (str[size])
		size++;
	if (str == 0)
		return (0);
	s = malloc(size * sizeof(char) + 1);
	if (!s)
		return (0);
	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
