#include "main.h"

/**
 * _strchr - function that locates a char n a string
 *
 * @s: array to search in
 * @c: the char tha we look for
 * Return: a pointer if c found if not return null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
