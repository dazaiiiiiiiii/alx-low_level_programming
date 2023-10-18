#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: mean destination
 * @src: mean source
 * @n: how many numbers to concatenate
 *
 * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest2 = dest;
	int j;

	while (*dest2)
		dest2++;
	j = 0;
	while (src[j] && j < n)
	{
		*dest2 = src[j];
		dest2++;
		j++;
	}
	*dest2 = '\0';
	return (dest);
}
