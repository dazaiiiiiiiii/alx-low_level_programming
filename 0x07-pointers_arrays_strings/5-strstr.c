#include "main.h"

/**
 * length - function that return the lengh of string
 *
 * @str: input string
 * Return: the lengh
 */

int length(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to search in
 * @needle: string that we looking for
 * Return: pointer if the substring found and NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	int nedlengh = length(needle);
	int count = 0;

	if (nedlengh == 0)
		return (haystack);
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			count = 0;
			while (*needle == *haystack && *needle)
			{
				count++;
				haystack++;
				needle++;
			}
			if (count == nedlengh)
				return (haystack - count);
			needle -= count;
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}

