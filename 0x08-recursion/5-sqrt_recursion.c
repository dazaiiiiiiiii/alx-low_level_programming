#include "main.h"

/**
 * find_sqrt - function to find the sqrt of a number
 *
 * @n: takes number input
 * @sqr: the sqr of the number
 * Return: return the value
 */

int find_sqrt(int n, int sqr)
{
	if (sqr * sqr > n)
		return (-1);
	if (sqr * sqr == n)
		return (sqr);
	else
		return (find_sqrt(n, sqr + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square of a n
 *
 * @n: takes number input
 * Return: return the value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
