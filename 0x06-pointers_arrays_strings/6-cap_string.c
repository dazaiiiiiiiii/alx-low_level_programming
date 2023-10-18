#include "main.h"

/**
 * lowercase - function that changes all uppercase lett to low
 * cap_string - function that capitalizes all words of a string
 *
 * @str: takes string
 * Return: string str
 */

char *lowercase(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char *cap_string(char *str)
{
	int i = 0;
	int check = 1;

	lowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check == 1)
				str[i] -= 32;
			check = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			check = 0;
		else if (str[i] == '-')
			check = 0;
		else
			check = 1;
		i++;
	}
	return (str);
}
