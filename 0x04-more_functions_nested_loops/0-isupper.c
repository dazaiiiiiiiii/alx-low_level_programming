#include "main.h"

/**
 * _isupper - function that checks for uppercase chars
 *
 * @c: takes input
 *
 * Return: 1 if c is upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
