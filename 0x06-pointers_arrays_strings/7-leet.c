#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: takes string
 *
 * Return: value of str
 */

char *leet(char *str)
{
	int j = 0;
	char lett[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i;

	while (str[j])
	{
		i = 0;
		while (i < sizeof(lett))
		{
			if (str[j] == lett[i] || str[j] == lett[i] - 32)
				str[j] = num[i];
			i++;
		}
		j++;
	}
	return (str);
}
