#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * @c: take input
 *
 * Return: Always 0 (Success)
 */

int main(char c)
{
	write(1, &c, 1);
	return (0);
}
