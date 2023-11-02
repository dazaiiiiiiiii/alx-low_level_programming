#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that return the str's length
 *
 * @str: takes input
 * Return: length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: pointer if successe or 0 if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0;
	unsigned int k;
	unsigned int size;
	unsigned int index;
	unsigned int length;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (*s1)
		i = _strlen(s1);
	size = i + n;
	arr = malloc((size + 1) * sizeof(char));
	if (!arr)
		return (0);
	k = 0;
	while (k < i)
	{
		index = arr[k] = s1[k];
		k++;
	}
	index = 0;
	while (index < n)
	{
		arr[index + i] = s2[index];
		index++;
	}
	length = k + index;
	arr[length] = '\0';
	return (arr);
}
