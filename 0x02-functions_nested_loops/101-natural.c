#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include<stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
