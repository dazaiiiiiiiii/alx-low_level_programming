#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an uint
 *
 * @b: pointer that point to the string
 * Return: return number in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	int i;

	for (i = 0; b[i]; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
	}
	int total;
	int power;

	total = 0;
	power = 1;
	for (int j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			total += power;
		power *= 2;
	}
	return (total);
}
