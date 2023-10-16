#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an arrayf ints
 *
 * @a: takes input
 * @n: takes number
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d", a[i]);
	printf("\n");
}
