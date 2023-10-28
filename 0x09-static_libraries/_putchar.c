#include "main.h"
#include <unistd.h>

/**
 * _putchar - to write chars
 *
 * @c: takes input
 * Return: 0 success
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
