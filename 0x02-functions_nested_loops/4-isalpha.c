#include "main.h"

/**
 * _isalpha - it's a function checks for alphabetic character
 *
 * @c: to check the input of our function
 *
 * Return: return 1 if 'c' is a letter otherwise always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
