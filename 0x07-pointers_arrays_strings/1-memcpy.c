#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: array to past
 * @src: array where we copied
 * @n: size
 * Return: return value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
