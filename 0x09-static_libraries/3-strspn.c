#include "main.h"

/**
 * _strspn - function that gets the lenth of a prefix substring
 *
 * @s: takes string
 * @accept: chars that they  are accept
 * Return: lenth
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*s || accept[j])
	{
		if (accept[j] == *s)
		{
			i++;
			s++;
			j = -1;
		}
		j++;
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
