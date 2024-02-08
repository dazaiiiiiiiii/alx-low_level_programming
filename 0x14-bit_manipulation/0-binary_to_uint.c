#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an uint
 *
 * @b: pointer that point to the string
 * Return: return number in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, total, power;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
	}
	total = 0;
	power = 1;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			total += power;
		power *= 2;
	}
	return (total);
}
