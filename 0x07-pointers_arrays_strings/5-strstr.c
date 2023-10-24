#include "main.h"

/**
 * lengh - function that return the lengh of string
 *
 * @str: input string
 * Return: the lengh
 */

int lengh(char *str)
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
	int nedlengh = lengh(needle);
	int count;

	while (*haystack && *needle)
	{
		count = 0;
		while (*needle == *haystack && *needle)
		{
			count++;
			haystack++;
			needle++;
		}
		if (count == nedlengh)
			break;
		haystack++;
		needle -= count;
	}
	if (count == nedlengh)
		return (haystack - count);
	return (0);
}
