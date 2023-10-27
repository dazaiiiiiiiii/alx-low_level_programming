#include "main.h"

/**
 * _strlen - function that return the lenght of a string
 *
 * @s: takes input
 * Return: lenght
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - function to check if the stirng is palindrome
 *
 * @s: takes string
 * @i: checks letters from left
 * @j: checks letters from right
 * Return: 1 if string is palindrome otherwise return 0
 */

int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (check_palindrome(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - function return 1 if string is palindrome otherwise 0
 *
 * @s: take string
 * Return: the 0 or 1 frome the previous function
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s);
	i--;
	if (i == 0 || i == 1)
		return (1);
	return (check_palindrome(s, 0, i));
}
