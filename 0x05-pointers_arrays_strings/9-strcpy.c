#include "main.h"

/**
 * _strcpy - function that copies the string pinted to by src to dest
 *
 * @dest: it's destination
 * @src: source
 *
 * Return: return the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
