#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: mean destination
 * @src: mean source
 * @n: takes number input
 *
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
