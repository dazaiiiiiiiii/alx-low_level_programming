#include "main.h"

/**
 * _abs - function that computes the absolute value of an int
 *
 * @i: to check the output
 *
 * Return: if i is less than 0 should return i *= -1 and if not return i
 */

int _abs(int i)
{
	if (i < 0)
		return (i *= -1);
	else
		return (i);
}
