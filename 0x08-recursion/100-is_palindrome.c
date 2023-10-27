#include "main.h"

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (check_palindrome(s, i + 1, j - 1));
	else
		return (0);
}

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s);
	i--;
	if (i == 0 || i == 1)
		return (1);
	return (check_palindrome(s, 0, i));
}
