#include "main.h"
#include <stdlib.h>

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
	int size1, size2 = 0;

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	size = size1 + size2;
	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (i < size && s1[i])
	{
		s[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i < size && s2[i])
	{
		s[j] = s2[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
