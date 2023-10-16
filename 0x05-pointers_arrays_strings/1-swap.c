#include "main.h"

/**
 * swap_int - function that swaps the values of two ints
 * @a: take input
 * @b: take input
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
