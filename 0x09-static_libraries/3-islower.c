#include "main.h"

/**
 * _islower - it's a function checks for the lowercase alphabet
 *
 * @c: to check the input of our function
 *
 * Return: return 1 if 'c' is lowercase otherwise always 0 (success0
 */

int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	else
		return (0);
}
