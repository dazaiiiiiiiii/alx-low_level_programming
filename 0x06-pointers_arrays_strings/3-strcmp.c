#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: takes the first string
 * @s2: takes the seconds string
 *
 * Return: the value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (s1[i] || s2[j])
	{
		if (s1[i] == s2[j])
			k = 0;
		else
		{
			return (k = s1[i] - s2[j]);
		}
		i++;
		j++;
	}
	return (k);
}
