#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters ot uppercase
 *
 * @str: takes string
 *
 * Return: return the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
