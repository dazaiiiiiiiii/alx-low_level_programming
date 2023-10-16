#include "main.h"

/**
 * rev_string - function that reveres a string
 * @s: take input
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int temp;

	while (s[i])
		i++;
	i--;
	j = 0;
	temp = 0;
	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
