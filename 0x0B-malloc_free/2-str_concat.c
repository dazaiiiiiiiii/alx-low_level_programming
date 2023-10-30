#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that the return the length of a string
 *
 * @str: takes input
 * Return: the length
 */

int _strlen(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i])
			i++;
	}
	return (i);
}

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first input
 * @s2: second input
 * Return: 0 if malloc failed otherwise return s
 */

char *str_concat(char *s1, char *s2)
{
	int i, size, j;
	char *s;
	int size1;
	int size2 = 0;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size = size1 + size2;
	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (0);
	i = 0;
	j = 0;
	if (s1 != NULL)
	{
		while (i < size && s1[i])
		{
			s[j] = s1[i];
			i++;
			j++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (i < size && s2[i])
		{
			s[j] = s2[i];
			i++;
			j++;
		}
	}
	s[j] = '\0';
	return (s);
}
