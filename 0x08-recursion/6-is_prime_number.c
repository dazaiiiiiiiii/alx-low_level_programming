#include "main.h"

/**
 * prime_rec - function that check for the prime number
 *
 * @n: takes number input
 * @i: takes number / 2
 * Return: return 1 if n is prime or 0 otherwise
 */

int prime_rec(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_rec(n, i - 1));
}

/**
 * is_prime_number - if n prime return 1 else 0
 *
 * @n: take number input
 * Return: return 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_rec(n, n / 2));
}
