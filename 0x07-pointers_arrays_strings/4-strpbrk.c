#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 *
 * @s: string to look in
 * @accept: chars to look for in the string
 * Return: return the value of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s && accept[i])
	{
		i = 0;
		while (*s != accept[i] && accept[i])
		{
			i++;
		}
		if (accept[i] == *s)
			return (s);
		s++;
	}
	if (accept[i] == *s)
		return (s);
	return (0);
}
