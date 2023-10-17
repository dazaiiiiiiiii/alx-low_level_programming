#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: takes input
 *
 * Return: return the value
 */

int _atoi(char *s)
{
	int i = 0;
	int signe = 0;
	unsigned int result;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i])
	{
		if (s[i] == '-')
			signe++;
		i++;
	}
	result = 0;
	while (s[i] && s[i] >= 48 && s[i] <= 57)
	{
		result *= 10;
		result += s[i] - 48;
		i++;
	}
	if (signe % 2 == 1)
		result = -result;
	return (result);
}
