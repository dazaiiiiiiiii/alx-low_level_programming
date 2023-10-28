#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: takes string
 * @b: input to fill with
 * @n: number of memory
 * Return: return pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
