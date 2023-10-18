#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: mean destination
 * @src: mean source
 *
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest2 = dest;
	int i = 0;
	int j;

	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		dest2++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
