#include "main.h"

/**
 * _strlen - function that returns the length fo a string
 *
 * @s: take input
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
