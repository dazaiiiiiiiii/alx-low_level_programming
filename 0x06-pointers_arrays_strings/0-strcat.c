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
	int j;

	while (*dest2)
		dest2++;
	j = 0;
	while (src[j])
	{
		*dest2 = src[j];
		dest2++;
		j++;
	}
	*dest2 = '\0';
	return (dest);
}
