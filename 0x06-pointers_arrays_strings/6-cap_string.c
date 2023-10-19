#include "main.h"

/**
 * lowercase - function that changes all uppercase lett to low
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

/**
 * separators - function that check the separators
 *
 * @c: takes char intput
 *
 * Return: 1 while true 0 while false
 */

char separators(char c)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	while (i < 12)
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: takes string
 * Return: string str
 */

char *cap_string(char *str)
{
	int i = 0;
	int check = 1;

	lowercase(str);
	while (str[i])
	{
		if (str[i] == '\t')
			str[i] = ' ';
		if (separators(str[i]))
			check = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check == 1)
				str[i] -= 32;
			check = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			check = 0;
		i++;
	}
	return (str);
}
