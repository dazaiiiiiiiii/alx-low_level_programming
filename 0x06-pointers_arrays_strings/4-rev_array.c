#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of ints
 *
 * @a: array of numbers
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j = 0;
	int temp;

	while (j < i)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j++;
		i--;
	}
}
