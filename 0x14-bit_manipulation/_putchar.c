#include <unistd.h>
#include "main.h"

/**
 * _putchar - function to print a char
 *
 * @a: input
 */

void _putchar(char a)
{
	write(1, &a, 1);
}
